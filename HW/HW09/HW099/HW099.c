/*
    ผู้ใช้กรอกจำนวนอาเรย์ 2 มิติขึ้นมา 2 ชุด และกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณสร้างอาเรย์ที่ 3 ขึ้นมาเก็บผลรวมของอาเรย์ทั้ง 2 ชุดนี้ โดยกำหนดให้ Element ของ Array1 , Array2 และ Array3 เท่ากัน

    Test case:
        Array1 element :
            3 3
        Input :
            1 2 3
            4 5 6
            7 8 9
        Array2 element :
            3 3
        Input :
            1 1 1
            1 1 1
            1 1 1
    Output:
        Array1 + Array2 = Array3
            2 3 4
            5 6 7
            8 9 10

*/

#include <stdio.h>

int main() {
    int i , j , rows , cols ;

    // รับจำนวนแถวและคอลัมน์ของอาเรย์
    printf( "Enter the number of rows and columns for Array1 and Array2:\n" ) ;
    scanf( "%d %d" , &rows , &cols ) ;

    int array1[ rows ][ cols ] , array2[ rows ][ cols ] , array3[ rows ][ cols ] ;

    // กรอกค่าของ Array1
    printf( "Array1 element:\n" ) ;
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            scanf( "%d" , &array1[ i ][ j ] ) ;
        } // end for
    } // end for

    // กรอกค่าของ Array2
    printf( "Array2 element:\n" ) ;
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            scanf( "%d" , &array2[ i ][ j ] ) ;
        } // end for
    } // end for

    // คำนวณผลรวมและเก็บไว้ใน Array3
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            array3[ i ][ j ] = array1[ i ][ j ] + array2[ i ][ j ] ;
        } // end for
    } // end for

    // แสดงผลลัพธ์
    printf( "Array1 + Array2 = Array3\n" ) ;
    for ( i = 0 ; i < rows ; i++ ) {
        for ( j = 0 ; j < cols ; j++ ) {
            printf( "%d " , array3[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    return 0 ; 
} // end function 
