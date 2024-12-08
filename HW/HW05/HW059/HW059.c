#include <stdio.h>

int main ( ) {

    float x1 , x2 , y1 , y2 , midx , midy ;

    printf( " Input A Point " ) ;
    scanf( "%f %f" , &x1 , &y1 ) ;
    printf( " Input B Point " ) ;
    scanf( "%f %f" , &x2 , &y2 ) ;

    midx = ( x1 + x2 ) / 2 ;
    midy = ( y1 + y2 ) / 2 ;

    printf( " Mid Point of A and B is ( %.1f , %.1f )" , midx , midy ) ;


    return 0 ;
} // end function 