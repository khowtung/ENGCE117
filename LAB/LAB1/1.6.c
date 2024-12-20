#include <stdio.h>
int GetMatrix( int *row , int *col ) ;
int main( ) {
    int *data , m , n ;

    data = GetMatrix( &m, &n ) ;

    return 0 ;
}//end function

int GetMatrix( int *row , int *col ) {

    int value[ 100 ] ;

    scanf( "%d %d" , row , col ) ;
    printf( "\n" ) ;

    for (int i = 0 ; i < *row ; i++ ) {
        for (int j = 0 ; j < *col ; j++) { 
            scanf( "%d" , &value[ i * *col + j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for
    
    printf( "enter number of rows and colums : %d %d\n" , *row , *col ) ;
    printf( "enter matrix element :\n" ) ;

    for (int i = 0 ; i < *row ; i++ ) {
        for (int j = 0 ; j < *col ; j++) { 
            printf( "%d" , value[ i * *col + j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    return value ;
} // end function getmatrix