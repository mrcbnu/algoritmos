//TADS Uniavan 
// Disciplina: Algoritmo II
// AV2 Pergunta 1
// Autor: Márcio Alves
// Escreva um programa que realiza a leitura de uma matriz 3x3 de inteiros e, usando uma função, 
// calcula a soma dos seus elementos

#include<stdio.h>
#include<locale.h>

int somaMat(int mat[][3]){ // função que soma os elementos da matriz
    int l, c, soma = 0;
    for (l = 0; l <3; l++ ){
        for (c = 0; c < 3; c++){
            soma = soma + mat[l][c];
        }
    }
   return soma; // retorna o valor da soma de todos os elementos da matriz
}

int main(){
    
    setlocale( LC_ALL, "Portuguese");

    int matriz[3][3];
    int l, c, soma;

    // entrada dos valores da matriz

    printf("\nDigite os valores da matriz 3x3\n");
    for(l = 0; l < 3; l++){
        for(c = 0; c < 3; c++){
            printf("\nValor de [%d][%d]: ", l , c );
            scanf("%d", &matriz[l][c]);
        }
    }

    // mostra a estrutura da matriz

    printf("\nVocê digitou a seguinte matriz:\n" );
    for (l = 0; l < 3; l++){
        printf("\n");
        for (c = 0; c < 3; c++){
            printf("\t%d", matriz[l][c]);
        }        
    } 

    // mostra a soma dos elementos da matriz

    printf("\n\nA soma dos elementos da matriz é %d\n\n", somaMat(matriz)); 
    return 0;
}
