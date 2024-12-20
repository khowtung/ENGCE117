#include <stdio.h>
struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;
struct student ( *GetStudent( int *room ) )[ 10 ] ;
int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    return 0 ;
}//end function

struct student ( *GetStudent( int *room ) )[ 10 ] { 
    struct student child[ 10 ] ;
     scanf( "%d" , room ) ;
    for (int i = 0 ; i < *room ; i++ ) {
        printf( "Room %d:\n" , i + 1 ) ;
        for (int j = 0 ; j < 10  ;  j++ ) {
            printf( "Student%d:" , j + 1 ) ;
            scanf( "%s" , &child[ j ].name ) ;  
            printf( "Age%d:" , j + 1 ) ;
            scanf( "%d" , &child[ j ].age ) ;
        } // end for
    } // end for

    for (int i = 0 ; i < *room ; i++) {
        printf( "Room %d: 10 Student entered\n" , i + 1 ) ;
    } // end for

}