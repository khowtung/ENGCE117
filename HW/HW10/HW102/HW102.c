#include <stdio.h>

int main() {
    char input ;
    char str[ 100 ] ; // อาเรย์สำหรับเก็บ string
    int index = 0 ; // ตำแหน่งในอาเรย์

    printf( "Enter 1 character :\n" ) ;

    while ( 1 ) {
        scanf( " %c" , &input ) ; // รับค่า 1 ตัวอักษร

        if ( input == 'Y' || input == 'y' ) {
            break ; // หากเป็น 'Y' หรือ 'y' ให้ออกจากลูป
        } // end if

        str[ index ] = input ; // เก็บอักษรในอาเรย์
        index++ ;
    } // end while

    str[ index ] = '\0' ; // ใส่ '\0' เพื่อปิดท้าย string

    printf( "String =" ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( " %c" , str[ i ] ) ; // แสดงผลทีละตัวอักษรพร้อมช่องว่าง
    } // end for
    printf( "\n" ) ;

    return 0 ;
} // end function
