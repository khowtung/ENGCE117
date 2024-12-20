#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void GetSet( int [ ] , int *number ) ;

int main( ) {
    int *data , num ;
    scanf( "%d" , &num ) ;
    GetSet( &data , &num ) ; 
    return 0 ;
}//end function

void GetSet( int array[ 100 ] , int *number ) {
        
    for (int i = 0 ; i < *number ; i++ ) {
        scanf( "%d" , &array[ i ] ) ; // ใช้ array เพื่อรับค่าของแต่ละสมาชิก
    } // end for

} // end void getset







// printf( "array [ 0 ] = %d " , array[ 0 ] ) ; //print ค่าในตำแหน่งอาเรยออกมา
// for (int  i = 0 ; i < *number ; i++ ) {
//     printf( " adress = %d array[ %d ] = %d\n" , &number[ i ] , i , array [ i ] ) ;
//     printf( " adress array = %d [ %d ]\n" , &array , i ) ;
//     printf( " adress pointer number = %d [ %d ]\n" , &number , i ) ;
// } //อันนี้คืออยากทำไวเช็คค่าองแอดเดรส
