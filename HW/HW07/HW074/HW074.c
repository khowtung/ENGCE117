#include <stdio.h>

int main() {
    int num , answer ;

    printf( "Enter number : " ) ;
    scanf( "%d" , &num ) ;

    while ( num >= 2 ) {
        answer = 1 ;
        int j = 2 ;
        while ( j * j <= num ) {
            answer *= ( num % j != 0 ) ;
            j++ ;
        } // end while

        int k = answer * num ;
        while ( k > 0 ) { // พิมพ์เฉพาะค่าที่เป็นจำนวนเฉพาะ
            printf( "%d " , num ) ;
            break ;
        } // end while
        num-- ;
    } // end while

    return 0 ;
}
