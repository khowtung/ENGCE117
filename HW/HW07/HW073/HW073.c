#include <stdio.h>

int main( ) {

    int number , num = 9 , sum = 0 ;
    int i = 0 ;
    printf( "Enter number :" ) ;
    scanf( "%d" , &number ) ;

    printf( "Series = " ) ;
    while ( i < number ) {
        printf( "%d" , num ) ;
        sum += num ;
        num = num * 10 + 9 ;
        printf( " + " ) ;
        i++ ;
    } // end while
    printf( "\nSum = %d" , sum ) ;

    return 0 ;
} // end function