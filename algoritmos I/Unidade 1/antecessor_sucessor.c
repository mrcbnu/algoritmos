#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int numero, antecessor, sucessor;

    printf( "Entre com um número inteiro: " );
    scanf( "%d", &numero );

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf( "\nO antecessor do número %d é %d\n", numero, antecessor );
    printf( "\nO sucessor do número %d é %d\n", numero, sucessor );
}
