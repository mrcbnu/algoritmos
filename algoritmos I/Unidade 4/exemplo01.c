#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale( LC_ALL, "portuguese" );

    int v[TAM], i, soma=0, menor, maior;

    printf( "Entre com os valores do vetor:\n" );
    for( i=0; i<TAM; i++ ){
        printf( "V[%d] = ", i );
        scanf( "%d", &v[i] );
    }

    for( i=0; i<TAM; i++ ){
        soma += v[i];
    }
    printf( "A soma total dos valores no vetor � %d", soma );

    printf( "\nConte�do do vetor: " );
    for( i=0; i<TAM; i++ )
        printf( "\t%d", v[i] );
    printf( "\nConte�do invertido do vetor: " );
    for( i=TAM-1; i>=0; i-- )
        printf( "\t%d", v[i] );

    menor = v[0];
    maior = v[0];
    for( i=1; i<TAM; i++ ){
        if( v[i] < menor ) menor = v[i];
        if( v[i] > maior ) maior = v[i];
    }
    printf( "\nO menor valor �: %d", menor );
    printf( "\nO maior valor �: %d", maior );

    printf( "\n" );
}
