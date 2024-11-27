#include <stdio.h>

int main() {

    char employees [ 11 ] ;
    int hourswork , daywork = 21;
    float moneyperhours , salary  ;

    printf( " please enter you id = " ) ;
    scanf( "%10s" , employees ) ;
    printf( " please enter your hourswork = " ) ;
    scanf( "%d" , &hourswork ) ;
    printf( " please enter your money per hours = " ) ;
    scanf( "%f" , &moneyperhours ) ;
    salary = hourswork * moneyperhours * daywork ;
    printf( " Employees id = %s \n" , employees ) ;
    printf( " salary = %.2f$" , salary ) ;
    
    return 0;
} // end main function