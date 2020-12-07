#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    float valorInicial, valorFinal;

    printf( "Entre com o valor da camisa: " );
    scanf( "%f", &valorInicial );

    valorFinal = valorInicial - valorInicial * 0.1;

    printf( "\nO valor final da camisa é R$ %.2f\n", valorFinal );
}
