#include <stdio.h>

void go( int **p, int *z ) ;

int main( ) {
    int *a , b = 10 , c = 20 ;
    go( &a, &b ) ;  // เรียกฟังก์ชัน go โดยให้ตัวชี้สองชั้น &a และตัวชี้เดี่ยว &b
    printf( "main = %d %p %p\n", *a, a, &a ) ;
    printf( "_______________________\n" ) ;
    go( &a, &c ) ; // เรียกฟังก์ชัน go อีกครั้ง โดยให้ &a และ &c
    printf( "main = %d %p %p\n", *a, a, &a ) ;
    return 0 ;
}//end function

void go( int **p, int *z ) {
    *p = z; // ทำให้ *p (ตัวชี้ที่ p ชี้) ชี้ไปยัง z
    printf( "fun = %d %p %p\n" , **p , *p , p ) ;
}