/*
    จงเขียนโปรแกรมอ่านค่าจากข้อมูลในไฟล์ แล้วนำมาแสดงบนหน้าจอ จากนั้นนำมาเรียงลำดับตามตัวอักษรจาก A-Z และเรียงข้อมูลจาก Z-A

    ข้อมูลภายในไฟล์ a15-8.txt :
        Thai
        Bird
        Ant
        Zero
        Wolf
        Cobra
        Orange
        Mango
        Yoyo
    Output:
        Normal (9 Item): Thai, Bird, Ant, Zero, Wolf, Cobra, Orange, Mango, Yoyo .
        Sort (A to Z)  : Ant, Bird, Cobra, Mango, Orange, Thai, Wolf, Yoyo, Zero .
        Sort (Z to A)  : Zero, Yoyo, Wolf, Thai, Orange, Mango, Cobra, Bird, Ant .
*/
// #include <stdio.h>

// void readtext ( ) ;

// int main( ) {
//     readtext( ) ;
//     return 0 ;
// } //end main

// void readtext ( ) {

//     char name[ 100 ][ 5 ] ;

//     FILE *fp ;
//     fp = fopen( "a15-8.txt" , "r" ) ;
//     if ( fp == NULL ) {
//         printf( " error " ) ;
//     } //end if

//     int count = 10 ;
//     for (int i = 0 ; i < count ; i++) {
//         for (int j = 0 ; j < count ; j++) {
//              if ( fscanf( fp , " %s" , name[ i ] ) == EOF ) {
//             break ;
//         } //end for
//         // printf( " %s" , name[ i ] ) ;
//         printf( " %c" , name[ i ][ 0 ] ) ;
//         } //end for
        
//     }
//     fclose( fp ) ;
    
// }

#include <stdio.h>
#include <string.h>

void readtext( ) ;
void sortWords( char words[ 20 ][ 20 ] , int count , int ascending ) ;

int main( ) {
    readtext( ) ;
    return 0 ;
}

void readtext( ) {
    char words[ 20 ][ 20 ] ;
    int count = 0 ;
    
    FILE *fp = fopen( "a15-8.txt" , "r" ) ;
    if ( fp == NULL ) {
        printf( "error\n" ) ;
        return ;
    }
    
    while ( count < 20 && fscanf( fp , "%19s" , words[ count ] ) != EOF ) {
        count++ ;
    }
    fclose( fp ) ;
    
    // Display normal order
    printf( "Normal ( %d Item ) : " , count ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s" , words[ i ] ) ;
        if ( i < count - 1 ) printf( ", " ) ;
    }
    printf( " .\n" ) ;
    
    // Sort A to Z
    sortWords( words , count , 1 ) ;
    printf( "Sort (A to Z)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s" , words[ i ] ) ;
        if ( i < count - 1 ) printf( ", " ) ;
    }
    printf( " .\n" ) ;
    
    // Sort Z to A
    sortWords( words , count , 0 ) ;
    printf( "Sort (Z to A)  : " ) ;
    for ( int i = 0 ; i < count ; i++ ) {
        printf( "%s" , words[ i ] ) ;
        if ( i < count - 1 ) printf( ", " ) ;
    }
    printf( " .\n" ) ;
}

void sortWords( char words[ 20 ][ 20 ] , int count , int ascending ) {
    char temp[ 20 ] ;
    for ( int i = 0 ; i < count - 1 ; i++ ) {
        for ( int j = i + 1 ; j < count ; j++ ) {
            if ( ( ascending && strcmp( words[ i ] , words[ j ] ) > 0 ) || ( !ascending && strcmp( words[ i ] , words[ j ] ) < 0 ) ) {
                strcpy( temp , words[ i ] ) ;
                strcpy( words[ i ] , words[ j ] ) ;
                strcpy( words[ j ] , temp ) ;
            }
        }
    }
}





