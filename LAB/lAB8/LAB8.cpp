#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

class Customer {
public:
    char Name[20];
    int Age;
    char Category[20];
    char Product[20];
    float Price;
public:
    void GetCustomerInfo(char StrMode[50]);
};

class FileHandler {
public:
    FILE* fp;
    char FilePath[100];
    Customer C[500];
    int MaxCustomer;
public:
    FileHandler(char FilePath[100]);
    void GetFilePath();
    void ReadFile();
    void SelectMode();
};

int main() {
    FileHandler* F = new FileHandler("customer.csv");
    while (1) F->SelectMode();
    return 0;
}

void FileHandler::SelectMode() {
    int Mode = 0;
    scanf("%d", &Mode);

    if (Mode == 0) {
        printf("Thank you!.\n");
        exit(0);
    } else if (Mode == 1) {
        int idx = 0;
        float maxPrice = -1;
        for (int i = 0; i < MaxCustomer; i++) {
            if (C[i].Price > maxPrice) {
                maxPrice = C[i].Price;
                idx = i;
            }
        }
        C[idx].GetCustomerInfo("Who bought highest price.");
    } else if (Mode == 2) {
        printf("File data = %d records.\n", MaxCustomer);
    } else if (Mode == 3) {
        float sum = 0;
        for (int i = 0; i < MaxCustomer; i++) {
            sum += C[i].Price;
        }
        printf("Average price = %.2f\n", sum / MaxCustomer);
    } else if (Mode == 4) {
        float sum = 0;
        for (int i = 0; i < MaxCustomer; i++) {
            sum += C[i].Age;
        }
        float avgAge = sum / MaxCustomer;
        int count = 0;
        for (int i = 0; i < MaxCustomer; i++) {
            if (C[i].Age > avgAge) count++;
        }
        printf("Average age = %.2f.\n", avgAge);
        printf("People who aged above average = %d.\n", count);
    } else if (Mode == 5) {
        char product[20];
        int maxCount = 0, count;
        for (int i = 0; i < MaxCustomer; i++) {
            count = 0;
            for (int j = 0; j < MaxCustomer; j++) {
                if (strcmp(C[i].Product, C[j].Product) == 0) count++;
            }
            if (count > maxCount) {
                maxCount = count;
                strcpy(product, C[i].Product);
            }
        }
        printf("Most popular product = %s (sold %d times).\n", product, maxCount);
    } else if (Mode == 6) {
        char category[20];
        int minCount = INT_MAX, count;
        for (int i = 0; i < MaxCustomer; i++) {
            count = 0;
            for (int j = 0; j < MaxCustomer; j++) {
                if (strcmp(C[i].Category, C[j].Category) == 0) count++;
            }
            if (count < minCount) {
                minCount = count;
                strcpy(category, C[i].Category);
            }
        }
        printf("Least popular category = %s (sold %d times).\n", category, minCount);
    } else {
        printf("Thank you!.\n");
        exit(0);
    }
}

FileHandler::FileHandler(char FilePath[100]) {
    strcpy(this->FilePath, FilePath);
    this->ReadFile();
}

void FileHandler::ReadFile() {
    fp = fopen("./output/customer.csv" , "r");
    if (!fp) {
        printf("Error opening file!\n");
        exit(1);
    }
    
    char line[100];
    MaxCustomer = 0;
    while (fgets(line, sizeof(line), fp)) {
        sscanf(line, "%[^,],%d,%[^,],%[^,],%f", C[MaxCustomer].Name, &C[MaxCustomer].Age, C[MaxCustomer].Category, C[MaxCustomer].Product, &C[MaxCustomer].Price);
        MaxCustomer++;
    }
    fclose(fp);
}

void Customer::GetCustomerInfo(char StrMode[50]) {
    printf("--------| %-8s\n", StrMode);
    printf("%-8s : %-10s\n", "Name", Name);
    printf("%-8s : %-4d\n", "Age", Age);
    printf("%-8s : %-10s\n", "Category", Category);
    printf("%-8s : %-10s\n", "Product", Product);
    printf("%-8s : %-5.2f\n", "Price", Price);
}

void FileHandler::GetFilePath() {
    printf("File Path: %s\n", FilePath);
}
