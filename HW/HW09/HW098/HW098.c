/*
    ผู้ใช้กรอกค่าจำนวนที่ต้องการสร้างอาเรย์ พร้อมกับกรอกค่าภายในอาเรย์จนครบ จากนั้นให้คุณแสดงค่าที่มาก "เป็นอันดับสาม" ของภายในอาเรย์

    Test case:
        Enter new element of Array :
            5
        Input :
            5
        Input :
            3
        Input :
            2
        Input :
            1
        Input :
            9
    Output:
        Array: 5 3 2 1 9
        The large 3rd element = 3

    Test case:
        Enter new element of Array :
            8
        Input :
            6
        Input :
            7
        Input :
            11
        Input :
            13
        Input :
            15
        Input :
            49
        Input :
            27
        Input :
            18
    Output:
        Array: 6 7 11 13 15 49 27 18
        The large 3rd element = 18
*/

#include <stdio.h>

int main( ) {
    int n , i , j , temp ; 

    // รับจำนวนที่ผู้ใช้ต้องการสร้างอาเรย์
    printf( "Enter new element of Array :\n" ) ;
    scanf( "%d" , &n ) ;

    int arr[ n ] ;

    // รับค่าภายในอาเรย์
    for ( i = 0 ; i < n ; i++ ) {
        printf( "Input: " ) ;
        scanf( "%d" , &arr[ i ] ) ;
    } // end for

    // แสดงอาเรย์ที่ผู้ใช้กรอก
    printf( "Array: " ) ;
    for ( i = 0 ; i < n ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    } // end for
    printf( "\n" ) ;

    // การจัดเรียงอาเรย์จากมากไปน้อย (Bubble Sort)
    for ( i = 0 ; i < n - 1 ; i++ ) {
        for ( j = 0 ; j < n - 1 - i ; j++ ) {
            if ( arr[ j ] < arr[ j + 1 ] ) {
                // สลับค่า
                temp = arr[ j ] ;
                arr[ j ] = arr[ j + 1 ] ;
                arr[ j + 1 ] = temp ;
            } // end if
        } // end for
    } // end for
    
    // แสดงผลค่ามากอันดับที่ 3
    if ( n > 3 ) {
        printf( "The large 3rd element = %d\n", arr[ 2 ] ) ;
    } // end if 

    return 0 ;
}

