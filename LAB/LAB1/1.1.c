#include <stdio.h>

int main ( ) {

    int n ;

    printf( " enter num : " ) ;
    scanf( "%d" , &n ) ;

    for (int i = 0; i < n ; i++ ) {
        printf( "[ %d ] Hello world\n" , i + 1 ) ;
    } // end for

    return 0 ;
} // end function