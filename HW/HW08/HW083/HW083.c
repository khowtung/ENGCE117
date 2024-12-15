        /*
            เมื่อผู้ใช้กรอกตัวเลข ให้โปรแกรมแสดงผลรวมของชุดอนุกรม ที่มีตัวเลข 2 ลำดับก่อนหน้าบวกกัน (อนุกรมฟีโบนัชชี)

            Test case:
                8
            Output:
                Series = 1 + 1 + 2 + 3 + 5 + 8 + 13 + 21
                Sum = 54

        */

        #include <stdio.h>

        int main( ) {
            int num , sum = 0 , before = 1 , after = 1 ;

            printf( "Enter the number of terms : " ) ; 
            scanf( "%d" , &num ) ;

            if ( num <= 0 ) {
                printf( "Please enter a positive integer.\n" ) ;
                return 1 ;
            }

            printf( "Series = " ) ;
            for ( int i = 1 ; i <= num ; i++ ) {
                if ( i == 1 ) {
                    printf( "%d" , after ) ;
                    sum += after ;
                } else if ( i == 2 ) {
                    printf( " + %d" , after ) ;
                    sum += after ;
                } else {
                    int next = before + after ;
                    printf( " + %d" , next ) ;
                    sum += next ;
                    before = after ;
                    after = next ;
                } // end if
            } // end for

            printf( "\nSum = %d\n" , sum ) ;

            return 0 ;
        }

