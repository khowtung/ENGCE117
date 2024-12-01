#include <stdio.h>

int main( ) {
    int a , b , c ;

    // รับค่าตัวเลขจากผู้ใช้
    printf( "Input [1 ] : " ) ;
    scanf( "%d" , &a ) ;
    printf( "Input[ 2 ] : " ) ;
    scanf( "%d" , &b ) ;
    printf( "Input[ 3 ] : " ) ;
    scanf( "%d" , &c ) ;

    // เปรียบเทียบและจัดเรียงจากมากไปน้อย
    if ( a >= b && a >= c ) {
        if ( b >= c ) {
            printf( "Output : %d %d %d\n" , a , b , c ) ;
        } else {
            printf( "Output : %d %d %d\n" , a , c , b ) ;
        }
    } else if ( b >= a && b >= c ) {
        if ( a >= c ) {
            printf( "Output : %d %d %d\n" , b , a , c ) ;
        } else {
            printf( "Output : %d %d %d\n" , b , c , a ) ;
     }
    } else {
        if ( a >= b ) {
            printf( "Output : %d %d %d\n" , c , a , b ) ;
        } else {
            printf( "Output: %d %d %d\n" , c , b , a ) ;
        }
    }

    return 0 ;
}
