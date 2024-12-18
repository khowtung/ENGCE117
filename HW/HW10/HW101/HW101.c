/*
    จงเขียนโปรแกรมเพื่อรับค่า String ที่สามารถรับชื่อและนามสกุลไว้ในตัวแปรเดียวกันได้ พร้อมกับแสดงผลบนหน้าจอคอมพิวเตอร์

    Test case:
        Kittinan Noimanee
    Output:
        Name: Kittinan Noimanee

    Test case:
        Visual Studio Code
    Output:
        Name: Visual Studio Code

*/
#include <stdio.h>

int main( ) {
    
    char fullName[ 100 ] ; 

    // รับค่าชื่อและนามสกุล
    printf( "Enter your full name : " ) ;
    fgets( fullName , sizeof( fullName ) , stdin ) ;


    // แสดงผลลัพธ์
    printf( "Name : %s\n" , fullName ) ;

    return 0 ;
} // end function

