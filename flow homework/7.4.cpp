/*
    รับค่าจากผู้ใช้จำนวน 1 ค่า และให้แสดงจำนวนเฉพาะตั้งแต่ค่าแรก จนถึงค่าที่ผู้ใช้กรอก โดยแสดงจำนวนเฉพาะจาก "มาก ไปหา น้อย"
    (โจทย์ข้อนี้ให้ใช้ Do While Loop เท่านั้น)

    Test case:
        Enter number :
            10
    Output:
        7 5 3 2

    Test case:
        Enter number :
            100
    Output:
        97 89 83 79 73 71 67 61 59 53 47 43 41 37 31 29 23 19 17 13 11 7 5 3 2
*/
#include <stdio.h>

int main( ) {
    int num;

    // รับค่าจากผู้ใช้
    printf("Enter number : ");
    scanf("%d", &num);

    // วนลูปเพื่อลดค่าของ num ทีละ 1 และตรวจสอบจำนวนเฉพาะ
    do {
        int answer = 1;
        int j = 2;

        // ตรวจสอบว่า num เป็นจำนวนเฉพาะหรือไม่
        do {
            if (num % j == 0) {
                answer = 0; // ไม่ใช่จำนวนเฉพาะ
                break;
            }
            j++;
        } while (j * j <= num);

        // ถ้าเป็นจำนวนเฉพาะ ให้พิมพ์ออกมา
        if (num > 1 && answer)
            printf("%d ", num);

        num--;
    } while (num >= 2); // เงื่อนไขของลูปหลัก

    return 0;
}

