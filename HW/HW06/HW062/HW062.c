#include <stdio.h>

int main( ) {
    
    int num ;
    
    scanf( "%d" , &num ) ;

    // ประกาศอาร์เรย์สำหรับตัวเลขโรมันและค่า
    char romans[ ][ 4 ] = { "I" , "IV" , "V" , "IX" , "X" , "XL" , "L" , "XC" , "C" , "CD" , "D" , "CM" , "M" } ;
    int values[ ] = { 1 , 4 , 5 , 9 , 10 , 40 , 50 , 90 , 100 , 400 , 500 , 900 , 1000 } ;

    printf( "%d = " , num ) ;

    // ใช้ For loop แปลงตัวเลข
    for ( int i = 12 ; i >= 0 ; i-- ) {
        while ( num >= values[ i ] ) {
            printf( "%s" , romans[ i ] ) ;
            num -= values[ i ] ;
        } // end while 
    } // end for

    printf( "\n" ) ;
    return 0 ;
} // end function
