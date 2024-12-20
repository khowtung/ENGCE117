#include <stdio.h>
#include <string.h>

void explode(char str1[ ] , char splitter , char str2[ ][ 10 ] , int *count ) ;

int main( ) {
    char str1[ 100 ] ;
    char out[ 20 ][ 10 ] ;
    int num ;

    // รับค่าจากผู้ใช้
    printf( "Enter a string : " ) ;
    fgets( str1 , sizeof( str1 ) , stdin ) ;
    str1[ strcspn( str1 , "\n" ) ] = '\0' ;  // ลบ newline ที่ fgets เพิ่มมา

    // เรียกฟังก์ชัน explode
    explode( str1 , '/' , out , &num ) ;

    // แสดงผลลัพธ์ที่ได้
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n" , i , out[ i ] ) ;
    } // end for
    printf( "count = %d\n" , num ) ;  // แสดงจำนวนคำ

    return 0 ;
} // end function

void explode( char str1[ ] , char splitter , char str2[ ][ 10 ] , int *count ) {
    char *token ; 
    *count = 0 ;

    // สร้างสำเนาของ str1 เพื่อป้องกันการแก้ไขต้นฉบับ
    char str_copy[ 100 ] ;
    strcpy( str_copy , str1 ) ;  // คัดลอก str1 ไปยัง str_copy

    // สร้างสตริงตัวแบ่ง
    char splitter_str[ 3 ] = {splitter , ' ' , '\0' } ;  // แปลง char เป็นสตริง และรองรับช่องว่าง

    // ใช้ strtok กับสตริงตัวแบ่ง
    token = strtok( str_copy , splitter_str ) ; // แยกข้อความแรก
    while ( token != NULL ) {
        strcpy( str2[ *count ] , token ) ; // เก็บข้อความใน str2
        ( *count )++ ;
        token = strtok( NULL , splitter_str ) ; // แยกข้อความถัดไป
    } // end while
} // end function explode
