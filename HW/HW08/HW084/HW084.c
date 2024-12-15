/*
    เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ของการหาค่า Factorial โดยมีสูตรในการหาค่า n! = n x (n-1)!
    (! = factorial)
    (จงเขียนโปรแกรมในข้อนี้โดยห้ามใช้ For Loop)

    Test case:
        5
    Output:
        5! = 5 x 4 x 3 x 2 x 1
        5! = 120

    Test case:
        8
    Output:
        8! = 8 x 7 x 6 x 5 x 4 x 3 x 2 x 1
        8! = 120

*/

#include <stdio.h>

int main( ) {

    int input ;
    int result = 1 ;
    scanf( "%d" , &input ) ;

    printf( "Output : \n" ) ;
    int curent = input ;
    while ( curent > 1 ) {
        printf( "%d x " , curent ) ;
        result *= curent ;
        curent-- ;
    } // end while

    result *= 1 ;
    printf( "%d\n" , curent ) ;
    printf( "%d" , result ) ;
    

    return 0 ;
} // end function