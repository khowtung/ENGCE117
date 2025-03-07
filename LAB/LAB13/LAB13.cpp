#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x, vector<int> &best_x, int current_w, int current_v, int &max_v);


int main() {
    int n, wx, vx, i;
    
    printf("Enter n : ");
    scanf("%d", &n);
    printf("Enter wx : ");
    scanf("%d", &wx);
    
    int *w = new int[n];
    int *v = new int[n];
    for (i = 0; i < n; i++) {
        printf("weight for item %d : ", i);
        scanf("%d", &w[i]);
    }
    for (i = 0; i < n; i++) {
        printf("value for item %d : ", i);
        scanf("%d", &v[i]);
    }
    
    int *x = new int[n]();
    vector<int> best_x(n, 0);
    int max_v = 0;
    
    vx = KnapsackBT(w, v, n, wx, 0, x, best_x, 0, 0, max_v);
    
    for (int i = 0; i < n; i++) printf("%d ", best_x[i]);
    printf("\nValue = %d", vx);
    
    delete[] w;
    delete[] v;
    delete[] x;
    
    return 0;
}

int KnapsackBT(int *w, int *v, int n, int wx, int i, int *x, vector<int> &best_x, int current_w, int current_v, int &max_v) {
    if (i == n) {
        if (current_v > max_v) {
            max_v = current_v;
            best_x.assign(x, x + n);
        }
        return max_v;
    }
    
    // ไม่เลือกชิ้นที่ i
    x[i] = 0;
    KnapsackBT(w, v, n, wx, i + 1, x, best_x, current_w, current_v, max_v);
    
    // เลือกชิ้นที่ i ถ้าหากน้ำหนักไม่เกิน
    if (current_w + w[i] <= wx) {
        x[i] = 1;
        KnapsackBT(w, v, n, wx, i + 1, x, best_x, current_w + w[i], current_v + v[i], max_v);
    }
    
    return max_v;
}


