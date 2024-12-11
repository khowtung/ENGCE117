#include <stdio.h>

int main( ) {

    int num , round = 1 ;
    scanf( "%d" , &num ) ;

    while ( round <= num )  {
        printf( num % 2 == 0 ? "(%d) Hello World\n" : "[%d] Hello World\n" , round ) ; // ใช้เครื่องหมาย () หากเลขที่ผู้ใช้กรอกเป็นเลขคู่ และ [] หากเป็นเลขคี่    
        round++;  
    } // end while
    return 0 ;
}