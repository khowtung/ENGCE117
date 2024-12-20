#include <stdio.h>
char* reverse( char str1[ ] ) ;
int main() {
    char text[ 50 ] = " I Love You " ;
    char *out ;
    out = reverse( text ) ;
}//end function

char* reverse( char str1[ ] ) {
    fgets( str1 , 50 , stdin ) ;  //รับค่า 
    str1[ strcspn( str1 , "\n" ) ] = '\0' ;  //ลบ \n เป็น \0(หรือ Endnewline)
    int length = strlen( str1 ) ;
        for ( int i = length - 1 ; i >= 0 ; i -- ) {
            printf( "%c" , str1[ i ] ) ;
        } // end for1 เก็บค่าการรีเวอร์ส
        printf( "\n" ) ;
} // end function reverse