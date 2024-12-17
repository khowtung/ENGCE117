/*
    ผู้ใช้กรอกจำนวนที่ต้องการในอาเรย์ 2 มิติ พร้อมกับกรอกค่าลงไปในอาเรย์จนครบทุกค่า จากนั้นให้คุณทำการ Transpose ค่าในอาเรย์และแสดงผลบนหน้าจอ

    Test case:
        Array element :
            2 3
        Input :
            9 8 7
            6 5 5
    Output:
        Array
            9 8 7
            6 5 5
        Array Transpose
            9 6
            8 5
            7 5

    Test case:
        Array element :
            3 6
        Input :
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
    Output:
        Array
            1 2 3 4 5 6
            7 8 9 10 11 12
            13 14 15 16 17 18
        Array Transpose
            1 7 13
            2 8 14
            3 9 15
            4 10 16
            5 11 17
            6 12 18
*/

#include <stdio.h>

int main( ) {
    int rows , cols , i , j ;

    // รับจำนวนแถวและคอลัมน์ของอาเรย์
    printf( "Enter the number of rows and columns for the Array:\n" ) ;
    scanf( "%d %d" , &rows , &cols ) ;

    int array[ rows ][ cols ] , transpose[ cols ][ rows ] ;

    // กรอกค่าภายในอาเรย์
    printf( "Array element:\n" ) ;
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            scanf( "%d" , &array[ i ][ j ] ) ;
        } // end for
    } // end for

    // แสดงผลอาเรย์เดิม
    printf( "Array\n" ) ;
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            printf( "%d " , array[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ; 
    } // end for

    // ทำการ Transpose อาเรย์
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            transpose[ j ][ i ] = array[ i ][ j ] ;
        } // end for
    } // end for

    // แสดงผลลัพธ์ของ Transpose อาเรย์
    printf( "Array Transpose\n" ) ;
    for ( i = 0 ; i < cols ; i++ ) {
        for ( j = 0 ; j < rows ; j++ ) {
            printf( "%d " , transpose[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    return 0 ;
} // end function
