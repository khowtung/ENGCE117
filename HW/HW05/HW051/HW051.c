#include <stdio.h>

int main( ) {

    char name[ 4 ] ;
    printf( " please enter char " ) ;
    for (int  i = 0 ; i < 4 ; i++ ){
        scanf( " %c" , &name[ i ] ) ;
    }

    for ( int i = 3 ; i >= 0 ; i-- ) {
        printf( "%c " , name[ i ] ) ;
    }
    return 0 ;

}