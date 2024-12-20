#include <stdio.h>
#include <string.h>

void explode(char str1[ ] , char splitters[ ] , char str2[ ][ 10 ] , int *count ) ;

int main( ) {
    char str1[ 100 ] ;
    char out[ 20 ][ 10 ] ;
    int num ;

    // รับค่าจากผู้ใช้
    printf( "Enter a string : " ) ;
    fgets( str1 , sizeof( str1 ) , stdin ) ;
    str1[ strcspn( str1 , "\n" ) ] = '\0' ;  // ลบ newline ที่ fgets เพิ่มมา

    // เรียกฟังก์ชัน explode
    explode( str1 , ", /" , out , &num ) ;

    // แสดงผลลัพธ์ที่ได้
    for ( int i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n" , i , out[ i ] ) ;
    } // end for
    printf( "count = %d\n" , num ) ;  // แสดงจำนวนคำ

    return 0 ;
} // end function

void explode( char str1[ ] , char splitters[ ] , char str2[ ][ 10 ] , int *count ) {
    char *token ;
    *count = 0 ;

    // สร้างสำเนาของ str1 เพื่อป้องกันการแก้ไขต้นฉบับ
    char str_copy[ 100 ] ;
    strcpy( str_copy , str1 ) ;  // คัดลอก str1 ไปยัง str_copy

    // ใช้ strtok กับหลายตัวแบ่ง
    token = strtok( str_copy , splitters ) ; // แยกข้อความแรก
    while ( token != NULL ) {
        // ลบช่องว่างที่เริ่มต้นและท้ายข้อความ
        while ( *token == ' ' ) token++ ;  // ลบช่องว่างที่หน้า
        char *end = token + strlen( token ) - 1 ;
        while ( end > token && *end == '  ') end-- ;  // ลบช่องว่างที่ท้าย
        *( end + 1 ) = '\0' ;  // สิ้นสุดสตริงที่ตำแหน่งสุดท้าย

        // เก็บข้อความใน str2
        strcpy( str2[ *count ] , token ) ;
        ( *count )++ ;

        token = strtok( NULL , splitters ) ; // แยกข้อความถัดไป
    } // end while
} // end function explode
