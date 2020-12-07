#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale( LC_ALL, "portuguese" );

    int vet[TAM],i;

    for ( i=0; i<TAM; i++ ){
            printf("V[%d] = ", i);
            scanf("%d", &vet[i]);
        }
    printf("\nPosições com multiplos de 5");    
    for ( i=0; i<TAM; i++){
        if (vet[i] % 5 == 0) printf("\t\n%d na posição %d ", vet[i],i);
    }
}