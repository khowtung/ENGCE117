/*
    รับค่า Array จากผู้ใช้มา 2 ค่า และเติมค่าในอาเรย์ให้เต็มทั้ง 2 ค่า นั้นนั้นทำ Array1 มาคูณกับ Array2 แบบ Matrix (คุณสามารถหาข้อมูลการคูณ Matrix เพิ่มเติมได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=Gocc4CriZdA)

    Test case:
        Array1 Value :
            2 5
        Array1 element :
            2 5 3 8 3
            2 5 3 1 1
        Array2 Value :
            5 2
        Array2 element :
            2 3
            4 4
            1 2
            1 1
            2 3
    Output:
        Array1
            2 5 3 8 3
            2 5 3 1 1
        Array2
            2 3
            4 4
            1 2
            1 1
            2 3
        Array1 x Array2
            41 49
            30 36

*/

#include <stdio.h>

int main( ) {
    int r1 , c1 , r2 , c2 , i , j , k ;

    // รับขนาดของ Array1 (Matrix 1)
    printf( "Array1 Value (rows cols):\n" ) ;
    scanf( "%d %d" , &r1 , &c1 ) ;

    int array1[ r1 ][ c1 ] ;

    // กรอกค่าภายใน Array1
    printf( "Array1 element:\n" ) ;
    for ( i = 0 ; i < r1 ; i++ ) {
        for ( j = 0 ; j < c1 ; j++ ) {
            scanf( "%d" , &array1[ i ][ j ] ) ;
        } // end for
    } // end for

    // รับขนาดของ Array2 (Matrix 2)
    printf( "Array2 Value (rows cols):\n" ) ;
    scanf( "%d %d" , &r2 , &c2 ) ;

    // ตรวจสอบเงื่อนไขการคูณเมทริกซ์ (จำนวนคอลัมน์ของ Array1 ต้องเท่ากับจำนวนแถวของ Array2)
    if ( c1 != r2) {
        printf( "Matrix multiplication is not possible.\n" ) ;
        return 0 ;
    } // end if

    int array2[ r2 ][ c2 ] , result[ r1 ][ c2 ] ;

    // กรอกค่าภายใน Array2
    printf( "Array2 element:\n" ) ;
    for ( i = 0 ; i < r2 ; i++ ) {
        for ( j = 0 ; j < c2 ; j++ ) {
            scanf( "%d" , &array2[ i ][ j ] ) ;
        } // end for
    } // end for

    // แสดง Array1
    printf( "Array1\n" ) ;
    for ( i = 0 ; i < r1 ; i++ ) {
        for ( j = 0 ; j < c1 ; j++ ) {
            printf( "%d " , array1[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    // แสดง Array2
    printf( "Array2\n" ) ;
    for ( i = 0 ; i < r2 ; i++)  {
        for ( j = 0 ; j < c2 ; j++ ) {
            printf( "%d " , array2[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    // คูณ Array1 กับ Array2 และเก็บผลลัพธ์ไว้ใน result
    for ( i = 0 ; i < r1 ; i++ ) {
        for ( j = 0 ; j < c2 ; j++ ) {
            result[ i ][ j ] = 0 ; // กำหนดค่าเริ่มต้นเป็น 0
            for ( k = 0 ; k < c1 ; k++ ) {
                result[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            } // end for
        } // end for
    } // end for

    // แสดงผลลัพธ์ Array1 x Array2
    printf( "Array1 x Array2\n" ) ;
    for ( i = 0 ; i < r1 ; i++ ) {
        for ( j = 0 ; j < c2 ; j++ ) {
            printf( "%d " , result[ i ][ j ] ) ;
        } // end for
        printf( "\n" ) ;
    } // end for

    return 0 ; 
} // end function
