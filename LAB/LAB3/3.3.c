#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main( ) {
    struct student aboy ;
    aboy.sex = 'M' ;  // ระบุเพศเป็นชาย
    aboy.gpa = 3.00 ; // ระบุ GPA เริ่มต้น

    aboy = upgrade( aboy ) ; // รับค่าโครงสร้างที่อัปเกรดแล้ว
    printf( "%.2f\n" , aboy.gpa ) ; // แสดงผล GPA หลังจากอัปเกรด
    return 0 ;
}

struct student upgrade( struct student child ) {
    if ( child.sex == 'M' ) {
        child.gpa *= 1.10 ; // เพิ่ม gpa ขึ้น 10% สำหรับเพศชาย
        if ( child.gpa > 4.00 ) {
            child.gpa = 4.00 ; // จำกัดค่า gpa สูงสุดที่ 4.00
        }
    } else if ( child.sex == 'F' ) {
        child.gpa *= 1.20 ; // เพิ่ม gpa ขึ้น 20% สำหรับเพศหญิง
        if ( child.gpa > 4.00 ) {
            child.gpa = 4.00 ; // จำกัดค่า gpa สูงสุดที่ 4.00
        }
    }
    return child ; // คืนค่าที่อัปเดตแล้วกลับไป
}
