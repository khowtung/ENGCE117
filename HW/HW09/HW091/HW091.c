#include <stdio.h>

int main( ) {
    int arr[ 100 ] ; // กำหนดขนาดของอาเรย์เป็น 100 (สามารถปรับขนาดตามต้องการ)
    int index = 0 ;
    int value;

    // รับค่าจากผู้ใช้จนกว่าจะกรอก -1
    while ( 1 ) {
        printf( "Input [ %d ] : " , index ) ;
        scanf( "%d" , &value ) ;

        if ( value == -1 ) {
            break ;  // หยุดเมื่อกรอก -1
        }

        arr[ index ] = value ;  // เก็บค่าลงในอาเรย์
        index++ ;
    }

    // แสดงผล
    printf( "Index = " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( "%d " , i ) ;
    }

    printf( "\nArray = " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    }

    printf( "\n" ) ;

    return 0 ;
}
