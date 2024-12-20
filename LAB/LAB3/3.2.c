#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

void upgrade( struct student *child ) {
    if ( child->sex == 'M' ) {
        child->gpa *= 1.10 ; // เพิ่ม gpa ขึ้น 10%
        if ( child->gpa > 4.00 ) {
            child->gpa = 4.00 ; // จำกัดค่า gpa สูงสุดที่ 4.00
        }
    } else if ( child->sex == 'F' ) {
        child->gpa *= 1.20 ; // เพิ่ม gpa ขึ้น 20%
        if ( child->gpa > 4.00 ) {
            child->gpa = 4.00 ; // จำกัดค่า gpa สูงสุดที่ 4.00
        } // end if
    } // end if
} // end function void

int main( ) {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;

    upgrade( &aboy ) ; // ส่ง address ของ struct
    printf( "%.2f\n" , aboy.gpa ) ;

    return 0 ;
} // end function 
