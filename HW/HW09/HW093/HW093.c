/*
    ผู้ใช้กรอกค่า แล้วบันทึกค่าลงไปในอาเรย์(Array1) จากนั้นให้คุณทำการคัดลอกข้อมูลทั้งหมดลงไปในอาเรย์ตัวใหม่(Array2) และให้คุณทำการแสดงข้อมูลในอาเรย์ตัวใหม่ทั้งหมดบนหน้าจอ (เมื่อผู้ใช้กรอก -1 จะถือเป็นการสิ้นสุดการกรอกข้อมูล)

    Test case:
        Input value to Array1 [0]:
            9
        Input value to Array1 [1]:
            5
        Input value to Array1 [2]:
            6
        Input value to Array1 [3]:
            8
        Input value to Array1 [4]:
            -1
    Output:
        Array1 = 9 5 6 8
        Array2 = 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 9 5 6 8


    Test case:
        Input value to Array1 [0]:
            7
        Input value to Array1 [1]:
            -3
        Input value to Array1 [2]:
            5
        Input value to Array1 [3]:
            19
        Input value to Array1 [4]:
            27
        Input value to Array1 [5]:
            -16
        Input value to Array1 [6]:
            13
        Input value to Array1 [7]:
            -7
        Input value to Array1 [8]:
            -1
    Output:
        Array1 = 7 -3 5 19 27 -16 13 -7
        Array2 = 0 0 0 0 0 0 0 0
        --| Copy Data from Array1 to Array2
        Array2 = 7 -3 5 19 27 -16 13 -7

*/

#include <stdio.h>

int main() {
    int Array1[ 100 ] ; // กำหนดขนาดของอาเรย์ Array1
    int Array2[ 100 ] ; // กำหนดขนาดของอาเรย์ Array2
    int index = 0 ;
    int value ;

    // รับค่าจากผู้ใช้จนกว่าจะกรอก -1
    while ( 1 ) {
        printf( "Input value to Array1 [ %d ] : " , index ) ;
        scanf( "%d" , &value ) ;

        if ( value == -1 ) {
            break ;  // หยุดเมื่อกรอก -1
        }

        Array1[ index ] = value ;  // เก็บค่าลงใน Array1
        index++ ;
    }

    // แสดงผล Array1
    printf( "Array1 = " ) ;
    for (int i = 0; i < index ; i++ ) {
        printf( "%d " , Array1[ i ] ) ;
    }
    printf( "\n" ) ;

    // แสดงผล Array2 (เริ่มต้นเป็น 0)
    printf( "Array2 = " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        Array2[ i ] = 0 ;  // กำหนดค่าเริ่มต้นเป็น 0
        printf( "%d " , Array2[ i ] ) ;
    }
    printf( "\n" ) ;

    // คัดลอกข้อมูลจาก Array1 ไปยัง Array2
    printf( "--| Copy Data from Array1 to Array2\n" ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        Array2[ i ] = Array1[ i ] ;
    }

    // แสดงผล Array2 หลังจากคัดลอกข้อมูล
    printf( "Array2 = " ) ;
    for ( int i = 0 ; i < index ; i++ ) {
        printf( "%d " , Array2[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0 ;
}
