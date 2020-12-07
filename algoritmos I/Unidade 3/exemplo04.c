#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int contador = 1;

    do{
        printf( "\nContador %d", contador );
        contador++;
    }while( contador <= 10 );

    printf( "\nContador após o laço %d\n", contador );
}
