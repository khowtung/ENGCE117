// TODO: #9 Fix bug and arrange code in CODEX pattern.
#include <stdio.h>
#include <stdbool.h>
int main( ) {
    float a , b = 3 ;
    bool active = 0 ;
    int i = 0 ;
    printf( "%d " , active ) ;

    if ( active != 0 ) {
        printf( " ok " ) ;
    } else {
             while ( i <= 5 ) {
                printf( " not-okey-%d ", ++i ) ;
             } // end while

                for ( i = 3 ; i < 10 ; i += 1 ) {
                    if ( i % 2 == (!1 ? 1 : 2) ) {
                        printf( "see see" ) ;

                    } // end if
                } // end for 
            printf( "haha" ) ;   
    } // end if
        return 0 ;
} // end function

