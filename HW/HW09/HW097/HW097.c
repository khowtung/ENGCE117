/*
    จากอาเรย์เดิม ที่มีค่าอยู่ก่อนแล้วคือ { 9, 2, 6, 1, 7 } จงเขียนโปรแกรมเพื่อรับค่าจากผู้ใช้อีก N จำนวน เพื่อนำไปต่อในอาเรย์เดิม และจัดเรียงใหม่จากน้อยไปยังมาก

    Test case:
        Enter new element of Array :
            4
        Input :
            3
        Input :
            4
        Input :
            2
        Input :
            5
    Output:
        Old Array: 9 2 6 1 7
        New Array: 1 2 2 3 4 4 5 6 7 9
*/

#include <stdio.h>

int main( ) {
    int arr[ ] = { 9 , 2 , 6 , 1 , 7 } ;  // อาเรย์เดิม
    int n , i , j , temp ;

    // รับจำนวนที่ผู้ใช้ต้องการเพิ่ม
    printf( "Enter new element of Array :\n" ) ;
    scanf( "%d" , &n) ;

    int newArr[ 5 + n ] ;  // สร้างอาเรย์ใหม่ที่มีขนาดเพิ่มขึ้น

    // คัดลอกค่าจากอาเรย์เดิมไปยังอาเรย์ใหม่
    for ( i = 0 ; i < 5 ; i++ ) {
        newArr[ i ] = arr[ i ] ;
    } // end for

    // รับค่าจากผู้ใช้แล้วเพิ่มลงในอาเรย์ใหม่
    for ( i = 5 ; i < 5 + n ; i++ ) {
        printf( "Input: " ) ;
        scanf( "%d" , &newArr[ i ] ) ;
    } // end for

    // การจัดเรียงอาเรย์ใหม่จากน้อยไปมาก (Bubble Sort)
    for ( i = 0 ; i < 5 + n - 1 ; i++ ) {
        for ( j = 0 ; j < 5 + n - 1 - i ; j++ ) {
            if ( newArr[ j ] > newArr[ j + 1 ] ) {
                // สลับค่า
                temp = newArr[ j ] ;
                newArr[ j ] = newArr[ j + 1 ] ;
                newArr[ j + 1 ] = temp ;
            } // end if
        } // end for
    } // end for

    // แสดงอาเรย์เดิม
    printf( "Old Array: " ) ;
    for ( i = 0 ; i < 5 ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    } // end for
    printf( "\n" ) ;

    // แสดงผลอาเรย์ใหม่ที่จัดเรียงแล้ว
    printf( "New Array: " ) ;
    for ( i = 0 ; i < 5 + n ; i++ ) {
        printf( "%d " , newArr[ i ] ) ;
    } // end for
    printf( "\n" ) ;

    return 0 ;
} // end function
