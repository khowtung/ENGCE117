#include <stdio.h>
int main ( ) {

    int tempc ;
    float tempf ; 
    printf( " please enter temp degree celsius ; " ) ;
    scanf( "%d" , &tempc ) ;

    tempf = 1.8 * tempc ;
    tempf += 32 ;

    printf( "%d degree celcius = %.2f degree fahrenheit " , tempc , tempf ) ;

    return 0 ;
}