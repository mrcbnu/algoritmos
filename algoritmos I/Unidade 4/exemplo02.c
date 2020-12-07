#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale( LC_ALL, "portuguese" );

    int v[TAM], i;

    printf( "Entre com os valores do vetor:\n" );
    for( i=0; i<TAM; i++ ){
        printf( "V[%d] = ", i );
        scanf( "%d", &v[i] );
    }

    printf( "\nPosições com múltiplos de cinco:" );
    for( i=0; i<TAM; i++ ){
        if( v[i] % 5 == 0 ) printf( "\n\t%d na posição %d", v[i], i );
    }

    printf( "\n" );
}
