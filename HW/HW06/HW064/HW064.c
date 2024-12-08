#include <stdio.h>

int main( ) {

    int number , num = 9 , sum = 0 ;
    printf( "Enter number :" ) ;
    scanf( "%d" , &number ) ;

    printf( "Series = " ) ;
    for (int  i = 0 ; i < number ; i++ ) {
        printf( "%d" , num ) ;
        sum += num ;
        num = num * 10 + 9 ;
        printf( " + " ) ;
    } // end for

    printf( "\nSum = %d" , sum ) ;

    return 0 ;
} // end function