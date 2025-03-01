/*
    ผู้ใช้กรอกจำนวนอาเรย์ที่ต้องการกรอก จากนั้นผู้ใช้ทำการกรอกข้อมูลลงไปในอาเรย์จนครบ และให้คุณแสดงค่าในอาเรย์ที่ไม่มีการซ้ำกันเท่านั้น โดยแสดงผลลัพธ์จากน้อยไปมาก

    Test case:
        Input N :
            5
        Input :
            1
        Input :
            1
        Input :
            2
        Input :
            3
        Input :
            3
    Output:
        Unique value : 2


    Test case:
        Input N :
            6
        Input :
            9
        Input :
            9
        Input :
            5
        Input :
            6
        Input :
            2
        Input :
            1
    Output:
        Unique value : 1 2 5 6

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
    }

    // เก็บค่าที่ไม่ซ้ำลงในอาเรย์ใหม่
    int unique[ N ] ;  // สำหรับเก็บค่าที่ไม่ซ้ำ
    int unique_count = 0 ;  // จำนวนค่าที่ไม่ซ้ำ

    // แสดงผลลัพธ์ของจำนวนชุดตัวเลขที่ซ้ำกัน
    for ( int i = 0 ; i < N ; i++ ) {
        count = 1 ; // เริ่มต้นที่ 1 เพราะตัวเลขตัวเองนับหนึ่งครั้ง
        if ( arr[ i ] != -1 ) { // ตรวจสอบว่าไม่ได้ตรวจสอบเลขที่ซ้ำแล้ว
            for ( int j = i + 1 ; j < N ; j++ ) {
                if ( arr[ i ] == arr[ j ] ) {
                    count++ ; // เพิ่มจำนวนถ้ามีค่าซ้ำ
                    arr[ j ] = -1 ; // ทำเครื่องหมายว่าเลขนี้ถูกนับไปแล้ว
                }
            }
            if ( count == 1 ) {
                unique[ unique_count ] = arr[ i ] ;
                unique_count++ ;
                }
        }
    }

    // เรียงข้อมูลจากน้อยไปมาก
    for ( int i = 0 ; i < unique_count - 1 ; i++ ) {
        for ( int j = i + 1 ; j < unique_count ; j++ ) {
            if ( unique[ i ] > unique[ j ] ) {
                // การสลับค่าถ้าตัวที่อยู่ข้างหน้ามากกว่าตัวที่อยู่ข้างหลัง
                int temp = unique[ i ] ;
                unique[ i ] = unique[ j ] ;
                unique[ j ] = temp ;
            }
        }
    }

    // แสดงค่าที่ไม่ซ้ำ
    printf( "Unique value : " ) ;
    for ( int i = 0 ; i < unique_count ; i++ ) {
        printf( "%d " , unique[ i ] ) ;
    }
    printf("\n");

    return 0 ;
}