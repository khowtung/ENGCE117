#include <stdio.h>

int main ( ) {

    int day , second ;
    float answer ;
    printf( " please enter day " ) ;
    scanf( "%d" , &day ) ;

    answer = day * 86400 ;

    printf( "%d day = %.1f " , day , answer ) ;

    return 0 ;
}