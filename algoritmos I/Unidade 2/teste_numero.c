#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    int num;

    printf( "Qual o n�mero a ser testado? " );
    scanf( "%d", &num );

    if( num < 0 ){
        printf( "\nO n�mero digitado � negativo!\n" );
    }
    if( num == 0 ){
        printf( "\nO n�mero digitado � zero!\n" );
    }
    if( num > 0 ){
        printf( "\nO n�mero digitado � positivo!\n" );
    }
}
