#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    int num;

    printf( "Qual o número a ser testado? " );
    scanf( "%d", &num );

    if( num < 0 ){
        printf( "\nO número digitado é negativo!\n" );
    }
    if( num == 0 ){
        printf( "\nO número digitado é zero!\n" );
    }
    if( num > 0 ){
        printf( "\nO número digitado é positivo!\n" );
    }
}
