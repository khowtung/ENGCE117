/*
    จงเขียนโปรแกรมเพื่อถอดรหัสข้อมูลจากไฟล์ และแปลงเป็นภาษาอังกฤษให้ถูกต้อง โดยโค๊ดที่อ่านได้จากไฟล์คือภาษาอังกฤษที่ถูกเลื่อนไปทางขวา 6 ตัวอักษร (เข้าไปที่เว็บไซท์นี้ https://studio.code.org/s/hoc-encryption/stage/1/puzzle/1 และทำการเลื่อนตัวอักษรไปทางขวา 6 ครั้ง จะได้รหัสลับนี้มา
    ดูวีดีโอประกอบได้ที่ลิงค์นี้ https://www.youtube.com/watch?v=eN4coe9KKzE

    ข้อมูลภายในไฟล์ a15-9.txt :
        C UG ALIIN
    Output:
        Output: I AM GROOT
*/

// #include <stdio.h>
// #include<stdlib.h>

// void readtext ( ) ;

// int main( ) {
//     readtext( ) ;
//     return 0 ;
// }

// void readtext ( ) {
//     FILE *fp ;
//     fp = fopen ( "a15-9.txt" , " r " ) ;
//     if ( fp = NULL ) {
//         printf( " Can't open file! " ) ; exit( 0 ) ;
//     }
//     char name[ 20 ] ;

//     for (int  i = 0 ; i < 20 ; i++ ) {
//         if ( fscanf( fp , " %c" , name )  == EOF )
//             break ;
//         printf( " = %c" , name ) ;
//     }
//     fclose( fp ) ;
// }

#include <stdio.h>

void readtext ( ) ;
void reverse ( int name ) ;

int main ( ) {
    readtext( ) ;
    return 0 ;
}//end main

void readtext ( ) {

        FILE *fp ;
    fp = fopen( "a15-9.txt" , "r" ) ;
    if ( fp == NULL ) {
        printf( " ERR " ) ;
    }//end if err

    char name ;
    int num ;
    
    while ( ( name = fgetc( fp ) ) != EOF ) {
        num = name ;
        reverse ( num ) ;
        // printf( " %d" , name ) ;
        // printf( " %d " , num ) ;
    } // end while
    fclose( fp ) ;

}

void reverse ( int num ) {
    num += 6 ;
    if ( num >= 65 && num <= 90 ) {
        printf( " %c" , num ) ;
    } else if ( num > 90 ){
        num = 65 ; 
        printf( " %c" , num ) ;
    } else {
        printf( " " ) ;
    }
    // printf( " %c" , num ) ;



}