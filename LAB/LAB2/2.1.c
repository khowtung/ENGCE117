#include <stdio.h>

void reverse( char str1[ ], char str2[ ] ) ;

int main( ) {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text , out ) ;
    printf( "%s\n", out ) ;
    return 0 ;
}//end function

void reverse( char str1[ 100 ] , char str2[ 100 ] ) {
    fgets( str1 , 50 , stdin ) ;  //รับค่า 
    str1[ strcspn( str1 , "\n" ) ] = '\0' ;  //ลบ \n เป็น \0(หรือ Endnewline)
    int length = strlen( str1 ) ;
        for ( int i = 0 ; i < length ; i++ ) {
            str2[ i ] = str1[ length - 1 - i ] ;
        } // end for1 เก็บค่าการรีเวอร์ส
    str2[ length ] = '\0' ; 
} // end function reverse
