#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    // Declaração de variáveis
    float nota1, nota2, media;

    // Entrada de dados
    printf( "Digite a primeira nota: ");
    scanf( "%f", &nota1 );
    printf( "Digite a segunda nota: " );
    scanf( "%f", &nota2 );

    // Processamento
    media = (nota1 + nota2) / 2;

    if ( media >= 6 ) {
        printf ("Você foi aprovado com media de %f\n", media );
    }

    // Saida
    printf( "\nFIM\n");
}




