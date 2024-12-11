#include <stdio.h>

int main ( ) {

    int numstart , numend , answer ;
    int i ;

    printf( "start : " ) ;
    scanf( "%d" , &numstart ) ;
    printf( "end : " ) ;
    scanf( "%d" , &numend ) ;

    while ( numstart <= numend ) {
        i = 1 ;
        while ( i < 10 ) {
            answer = numstart * i ;
            printf( "%d x %d = %d\n" , numstart , i , answer ) ;
            i++ ;
        } // end for เอาไว้คูณเลข และแสดงเลขที่คูณถุงแม่ต
        numstart++ ;
    } // end while
    
    return 0 ;
} // end function 