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

    printf( "\nPosi��es com m�ltiplos de cinco:" );
    for( i=0; i<TAM; i++ ){
        if( v[i] % 5 == 0 ) printf( "\n\t%d na posi��o %d", v[i], i );
    }

    printf( "\n" );
}
