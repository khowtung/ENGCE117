#include <stdio.h>

int GetSet( int array[  ] ) ;

int main() {

    int *data , num ;
    num = GetSet( &data ) ;
    
    return 0 ;
}//end function

int GetSet( int array[ ] ) {

    int number ;
    printf( " Enter the number of elements : " ) ;
    scanf( "%d" , &number ) ;

    for (int i = 0 ; i < number ; i++ ) {
        printf( " Enter the elements : " ) ;
        scanf( "%d" , &array[ i ] ) ; 
    } // end for

    printf( " number of elements : %d\n " , number ) ;

    for (int  i = 0 ; i < number ; i++ ) {
        printf( "%d " , array[ i ] ) ;
    } // end for

    return number ;
        
} // end function getset



// for (int  i = 0 ; i < num ; i++ ) {
//         printf( "main = %d " , data[ i ] ) ;
//     } // end for