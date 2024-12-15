/*
    ให้ผู้ใช้กรอกค่าเข้ามาเก็บในอาเรย์ จากนั้นให้ทำการแสดงค่าข้อมูล 2 แบบคือ "เรียงข้อมูลจากมากไปน้อย" และ "เรียงข้อมูลจากน้อยไปมาก"

    Test case:
        Input :
            1
        Input :
            5
        Input :
            1
        Input :
            4
        Input :
            6
        Input :
            9
        Input :
            13
        Input :
            -1
    Output:
        0-99 : 1 1 4 5 6 9 13
        99-0 : 13 9 6 5 4 1 1

*/

#include <stdio.h>

int main() {
    int arr[ 100 ] ;  // กำหนดขนาดของอาเรย์
    int index = 0 ;
    int value ;
    int temp ;

    // รับค่าจากผู้ใช้จนกว่าจะกรอก -1
    while ( 1 ) {
        printf( "Input : " ) ;
        scanf( "%d" , &value ) ;

        if ( value == -1 ) {
            break ;  // หยุดเมื่อกรอก -1
        } // end if

        arr[ index ] = value ;  // เก็บค่าลงในอาเรย์
        index++ ;
    } // end while

    // เรียงข้อมูลจากน้อยไปมาก
    for (int i = 0 ; i < index - 1 ; i++ ) {
        for (int j = i + 1 ; j < index ; j++ ) {
            if ( arr[ i ] > arr[ j ] ) {
                // สลับค่าของ arr[i] และ arr[j]
                temp = arr[ i ] ;
                arr[ i ] = arr[ j ] ;
                arr[ j ] = temp ;
            } //end if
        } // end for
    } // end for

    // แสดงผลลัพธ์จากน้อยไปมาก
    printf( "0-99 : " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    } // end for
    printf( "\n" ) ;

    // เรียงข้อมูลจากมากไปน้อย
    for ( int i = 0 ; i < index - 1 ; i++ ) {
        for ( int j = i + 1 ; j < index ;  j++ ) {
            if ( arr[ i ] < arr[ j ] ) {
                // สลับค่าของ arr[i] และ arr[j]
                temp = arr[ i ] ;
                arr[ i ] = arr[ j ] ;
                arr[ j ] = temp ;
            } // end if
        } // end for
    } // end for 

    // แสดงผลลัพธ์จากมากไปน้อย
    printf( "99-0 : " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( "%d " , arr[ i ] ) ;
    } // end for
    printf( "\n" ) ;

    return 0 ;
} // endfunction 
