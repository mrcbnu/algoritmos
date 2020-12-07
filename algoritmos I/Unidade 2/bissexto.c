#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int ano;

    printf( "Qual o ano a ser verificado? " );
    scanf( "%d", &ano );

    if( ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0) ){
        printf( "\nO ano %d é bissexto!\n", ano );
    }
    else{
        printf( "\nO ano %d não é bissexto!\n", ano );
    }
}




