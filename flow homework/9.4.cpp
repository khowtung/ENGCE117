/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงจำนวนชุดตัวเลขที่ซ้ำกันจากที่ผู้ใช้กรอก

    Test case:
        Input N :
            4
        Element[0] :
            3
        Element[1] :
            3
        Element[2] :
            2
        Element[3] :
            5
    Output:
        2 -> 1 value.
        3 -> 2 values.
        5 -> 1 value.


    Test case:
        Input N :
            9
        Element[0] :
            6
        Element[1] :
            6
        Element[2] :
            5
        Element[3] :
            9
        Element[4] :
            1
        Element[5] :
            9
        Element[6] :
            7
        Element[7] :
            6
        Element[8] :
            2
    Output:
        1 -> 1 value.
        2 -> 1 value.
        5 -> 1 value.
        6 -> 3 values.
        7 -> 1 value.
        9 -> 2 values.
*/

#include <stdio.h>

int main( ) {
    int N ;

    // รับจำนวนอาเรย์ที่ผู้ใช้ต้องการกรอก
    printf( "Input N : " ) ;
    scanf( "%d" , &N ) ;

    int arr[ N ] ;  // กำหนดขนาดอาเรย์
    int count ;

    // รับค่าจากผู้ใช้เก็บในอาเรย์
    for ( int i = 0 ; i < N ; i++ ) {
        printf( "Element[ %d ] : " , i ) ;
        scanf( "%d" , &arr[ i ] ) ;
    } //end for

    // แสดงผลลัพธ์ของจำนวนชุดตัวเลขที่ซ้ำกัน
    for ( int i = 0 ; i < N ; i++ ) {
        count = 1 ; // เริ่มต้นที่ 1 เพราะตัวเลขตัวเองนับหนึ่งครั้ง
        if ( arr[ i ] != -1 ) { // ตรวจสอบว่าไม่ได้ตรวจสอบเลขที่ซ้ำแล้ว
            for ( int j = i + 1 ; j < N ; j++ ) {
                if ( arr[ i ] == arr[ j ] ) {
                    count++ ; // เพิ่มจำนวนถ้ามีค่าซ้ำ
                    arr[ j ] = -1 ; // ทำเครื่องหมายว่าเลขนี้ถูกนับไปแล้ว
                } //end if
            } //end for
            if ( count == 1 ) {
                printf( "%d -> 1 value.\n" , arr[ i ] ) ;
                } else {
                    printf( "%d -> %d values.\n" , arr[ i ] , count ) ;
                } //end if
        } //end if
    } //end for

    return 0 ;
} //end function
