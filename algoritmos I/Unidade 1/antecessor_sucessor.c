#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int numero, antecessor, sucessor;

    printf( "Entre com um n�mero inteiro: " );
    scanf( "%d", &numero );

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf( "\nO antecessor do n�mero %d � %d\n", numero, antecessor );
    printf( "\nO sucessor do n�mero %d � %d\n", numero, sucessor );
}
