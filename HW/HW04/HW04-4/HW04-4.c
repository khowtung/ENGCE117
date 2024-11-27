#include <stdio.h>

int main ( ) {

    int base , high ;
    float answer ;
    printf( " please enter base high " ) ;
    scanf( "%d %d" , &base , &high ) ;

    answer  = 0.5 * base * high ;
    printf( " Triagle Area = %.2f" , answer ) ;


    return 0 ;
}