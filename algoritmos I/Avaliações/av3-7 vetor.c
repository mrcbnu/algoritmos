// TADS Uniavan 
// Disciplina: Algoritmo I
// AV3 Pergunta 7
// Autor: Márcio Alves

// Construa um algoritmo que solicite 5 (cinco) valores inteiros ao usuário e os armazene em um vetor. Após, deverá ser 
// invertido os valores do vetor sem utilizar um segundo vetor. Apresente o resultado.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetor[5], i, aux;

    // entrada dos valores
    for (i = 0; i < 5; i++){
        printf("%dº valor: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    // mostra vetor original
    printf("\nVetor original\n");
    for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
    // invertendo as posições
    printf("\nVetor invertido\n");
    for (i = 0; i < 3; i++){ // nas 2 primeiras passagens pelo vetor, as posições 0, 1 , 3 e 4 trocam os valores.
        aux = vetor[i];
        vetor[i] = vetor[4-i];
        vetor[4-i] = aux;
        
    }
    for (i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }
}

   