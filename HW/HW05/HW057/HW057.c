#include <stdio.h>

int main( ) {
    int year ;
    scanf( "%d" , &year ) ;

    if ( year % 4 != 0 ) {
        printf( "February has 28 days\n" ) ;
    } else if ( year % 100 == 0 && year % 400 != 0 ) {
        printf( "February has 28 days\n" ) ;
    } else {
        printf( "February has 29 days\n" ) ;
    } // end if

    return 0 ;
} // end function