/*
    เขียนโปรแกรมรับตัวเลขจากผู้ใช้ n ชุด จากนั้นทำการหาผลรวม และค่าเฉลี่ยของชุดตัวเลขเหล่านั้น (แสดงค่าเฉลี่ยเป็นทศนิยม 2 ตำแหน่ง)

    Test case:
        Enter value n :
            6
        Enter number 1 :
            19
        Enter number 2 :
            7
        Enter number 3 :
            23
        Enter number 4 :
            96
        Enter number 5 :
            77
        Enter number 6 :
            16
    Output:
        Sum = 238
        Avg = 39.67

*/

#include <stdio.h>

int main( ) {

    float avg  , sum = 0 , num ;
    int n ;
    printf( " enter value n : " ) ;
    scanf( "%d" , &n ) ;
    for (int i = 0 ; i < n ; i++ ) {
        printf( " enter number %d : " , i + 1 ) ;
        scanf( "%f" , &num ) ;
        sum += num ;
    } // end for
    printf( " Sum = %.0f\n" , sum ) ;
    avg = sum / n ;
    printf( " Avg = %.2f\n" , avg ) ;
    return 0 ;
}