#include <stdio.h>

int main ( ) {

    int numstart , numend , answer ;

    printf( "start : " ) ;
    scanf( "%d" , &numstart ) ;
    printf( "end : " ) ;
    scanf( "%d" , &numend ) ;

    for (int i = numstart ; i <= numend ; i++ ) {
        for (int j = 1 ; j < 13 ; j++ ) {
        answer = i * j ;
        printf( "%d x %d = %d\n" , i , j , answer ) ;
        } // end for
    } // end for

    return 0 ;
} // end function 