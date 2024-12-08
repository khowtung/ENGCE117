#include <stdio.h>

int main( ) {

    int num1 , num2 ;

    scanf( "%d %d" , &num1 , &num2 ) ;
    if ( num1 > num2 )
    {
        printf( " Number1 greater than Number2 " ) ;
    } else if ( num1 < num2 )
    {
        printf( " Number1 lower than Number2 " ) ;
    } else {
        printf(" Number1 equal Number2 " ) ;
    }
    
    

    return 0 ;
}