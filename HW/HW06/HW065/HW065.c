#include <stdio.h>

int main( ) {

    int num , answer ;
    
    printf( "Enter number : " ) ;
    scanf( "%d" , &num ) ;

    for ( int  i = num ; i >= 2 ; i-- ) {
        answer = 1 ;
        for ( int j = 2 ; j * j <= i ; j++ ) {
            answer *= ( i % j != 0 ) ;
        } // end for
        for ( int k = answer * i ; k > 0 ; k-- ) { // พิมพ์เฉพาะค่าที่เป็นจำนวนเฉพาะ
            printf( "%d " , i ) ;
            break ;
        } // end for
    } // end for
    return 0 ;
} // end function