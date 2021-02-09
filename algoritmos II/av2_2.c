//TADS Uniavan 
// Disciplina: Algoritmo II
// AV2 Pergunta 2
// Autor: Márcio Alves
// Escreva um programa que realiza a leitura de duas matrizes de inteiros, com tamanho 3x3 cada uma, 
// e, usando uma função, determina se elas têm o mesmo conteúdo, ou seja, se são iguais.

#include<stdio.h>
#include<locale.h>

int comparaMat(int A[][3], int B[][3]){ // função que compara 2 matrizes
    printf("\n");
    int l, c, igual = 1;
        for(l = 0; l < 3 ;l++){ // laço de repetição que ira percorrer todoss os itens das matrizes
            for(c = 0; c < 3; c++){
                if (A[l][c] != B[l][c]){ // se encontrar algum item divervegente na mesma posição
                    igual = 0;           // das matrizes, a igualdade é falsa e o laço é interrompido   
                    break;
                }
            }   
        }
    
    return igual; //  retorna igual = 1 matrizes iguais, igual = 0 matrizes diferentes
}   
  
int main(){
    
    setlocale( LC_ALL, "Portuguese");

    int matA[3][3], matB[3][3]; 
    int l, c;

    // entrada de valores das matrizes

    printf("\nDigite os valores da matriz A 3x3\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("\nValor de [%d][%d]: ", l , c );
            scanf("%d", &matA[l][c]);
        }
    }
    printf("\n\nDigite os valores da matriz B 3x3\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("\nValor de [%d][%d]: ", l , c );
            scanf("%d", &matB[l][c]);
        }
    } 
    
    // mostra estrutura das matrizes

    printf("\nMATRIZ A\n" );
    for (l = 0; l < 3; l++){
        printf("\n");
        for (c = 0; c < 3; c++){
            printf("\t%d", matA[l][c]);
        }        
    } 
    printf("\n\nMATRIZ B\n" );
    for (l = 0; l < 3; l++){
        printf("\n");
        for (c = 0; c < 3; c++){
            printf("\t%d", matB[l][c]);
        }        
    } 

    // informa se as matrizes são iguias ou não 

    if (comparaMat(matA,matB) == 1){ // se função comparaMat() retornar 1, matrizes são iguais 
        printf("\n\nAs matrizes são iguais\n");
    }
    else                            // senão, são diferentes
    {
        printf("\nAs matrizes são diferentes\n");
    }
    
    return 0;
}   
