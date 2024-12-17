/*
    ผู้ใช้ทำการกรอกค่าที่ต้องการสร้างอาเรย์(Array1 และ Array2) และให้ทำการผสานอาเรย์ทั้งสองมาเป็นอาเรย์ใหม่(Array3) และแสดงผลลัพธ์หลังจากการผสานกันแสดงผลจากมากไปน้อย

    Test case:
        Enter element of Array1 :
            4
        --| Array1 [0] :
            9
        --| Array1 [1] :
            7
        --| Array1 [2] :
            6
        --| Array1 [3] :
            3
        Enter element of Array2 :
            5
        --| Array2 [0] :
            2
        --| Array2 [1] :
            3
        --| Array2 [2] :
            5
        --| Array2 [3] :
            8
        --| Array2 [4] :
            9
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 9 8 7 6 5 3 3 2

    Test case:
        Enter element of Array1 :
            8
        --| Array1 [0] :
            7
        --| Array1 [1] :
            8
        --| Array1 [2] :
            9
        --| Array1 [3] :
            6
        --| Array1 [4] :
            1
        --| Array1 [5] :
            2
        --| Array1 [6] :
            8
        --| Array1 [7] :
            3

        Enter element of Array2 :
            6
        --| Array2 [0] :
            2
        --| Array2 [1] :
            1
        --| Array2 [2] :
            3
        --| Array2 [3] :
            5
        --| Array2 [4] :
            3
        --| Array2 [5] :
            6
    Output:
        Merge Array1 & Array2 to Array3
        Array3 = 9 8 8 7 6 6 5 3 3 3 2 2 1 1
*/

#include <stdio.h>

int main( ) {
    int size1 , size2 , i , j ;

    // รับขนาดและค่าสำหรับ Array1
    printf( "Enter element of Array1 : " ) ;
    scanf( "%d" , &size1 ) ;
    int array1[ size1 ] ;
    for (i = 0 ; i < size1 ; i++ ) {
        printf( "Array1 [ %d ] : " , i ) ;
        scanf( "%d" , &array1[ i ] ) ;
    } // end for

    // รับขนาดและค่าสำหรับ Array2
    printf( "Enter element of Array2 : " ) ;
    scanf( "%d" , &size2 ) ;
    int array2[ size2 ] ;
    for ( i = 0 ; i < size2 ; i++ ) {
        printf( "Array2 [ %d ] : " , i ) ;
        scanf( "%d" , &array2[ i ] ) ;
    } // end for

    // ผสาน Array1 และ Array2 เป็น Array3
    int size3 = size1 + size2 ;
    int array3[ size3 ] ;
    for ( i = 0 ; i < size1; i++ ) array3[ i ] = array1[ i ] ;
    for ( j = 0 ; j < size2 ; j++ ) array3[ size1 + j ] = array2[ j ] ;

    // เรียงลำดับ Array3 จากมากไปน้อย (Bubble Sort)
    for ( i = 0 ; i < size3 - 1 ; i++ ) {
        for ( j = 0 ; j < size3 - 1 - i ; j++ ) {
            if ( array3[ j ] < array3[ j + 1 ] ) {
                int temp = array3[ j ] ;
                array3[ j ] = array3[ j + 1 ] ;
                array3[ j + 1 ] = temp ;
            } // end if
        } // end for
    } // end for

    // แสดงผลลัพธ์ Array3
    printf( "Array3 = " ) ;
    for ( i = 0 ; i < size3 ; i++ ) {
        printf( "%d " , array3[ i ] ) ;
    } // end for
    return 0 ; 
} // end function

