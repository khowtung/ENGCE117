#include <stdio.h>
int *GetSet( int * ) ;

int main( ) {

    int *data , num ;
    data = GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet( int *number ) {

    int *array[ 100 ] ;

    printf( "enter tne number of element : " ) ;
    scanf( "%d" , number ) ;
    
    for (int i = 0 ; i < *number ; i++ ) {
        printf( "enter the element : " ) ;
        scanf( "%d" , &array[ i ] ) ;
    } // end for
    printf( "number of element : %d\n" , *number ) ;
    for (int i = 0 ; i < *number ; i++ ) {
        printf( "%d ", array[ i ] ) ;
    } // end for
    
    return 0 ;
} // end function getset