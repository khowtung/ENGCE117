#include <stdio.h>

void GetMatrix( int value[ ] , int *row , int *colums ) ;

int main( ) {
    int *data , m , n ;

    GetMatrix( &data , &m , &n ) ;

    return 0 ;  
}//end function

void GetMatrix( int value[ ] , int *row , int *colums ) {

    printf( "enter tne number of row : " ) ;
    scanf( "%d" , row ) ;
    printf( "enter the number of colum : " ) ;
    scanf( "%d" , colums ) ;

    printf( "Enter the matrix elements: " ) ;

    for (int i = 0 ; i < *row ; i++) { 
        for (int j = 0 ; j < *colums ; j++ ) {
            scanf( "%d" , &value[ i * *colums + j ] ) ;
        } // end for
    } // end for

    printf( "matrix (%d x %d) :\n" , *row , *colums ) ; 

    for ( int i = 0 ; i < *row ; i++ ) { 
        for ( int j = 0 ; j < *colums ; j++ ) {
            printf( "getmatrix = %d " , value[ i * *colums + j ] ) ;
        } //end for
    printf( "\n" ) ;
    } // end for

} // end function getmatrix






// for ( int i = 0 ; i < m ; i++ ) { 
//         for ( int j = 0 ; j < n ; j++ ) {
//             printf( "main = %d " , data[ i * n + j ] ) ;
//         } //end for
//     printf( "\n" ) ;
//     } // end for