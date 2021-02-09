// TADS Uniavan 
// Disciplina: Algoritmo II
// AV1 Pergunta 2
// Autor: Márcio Alves
// Faça um programa que receba um número inteiro via teclado e, usando uma FUNÇÃO RECURSIVA,
// imprima a contagem regressiva a partir deste valor na tela, mostrando apenas os números ímpares. 
// Por exemplo, se o usuário digitar 10, o programa deverá mostrar 9, 7, 5, 3, 1.

#include <stdio.h>
#include<locale.h>


int impar(num){ // função que faz a contagem regressiva a partir do valor do parametro
    if (num > 0){
        if (num %2 != 0)printf("%d ", num); //  valida se o numero é impar, mostrando o resultado verdadeiro
        impar(num - 1); // chamada da função recursiva
    }
    else return 0;
}   

int main(){
    setlocale( LC_ALL, "portuguese" );

    int numero;

// entrada de valores

    printf("\nDigite um numero: ");
    scanf("%d", &numero);

// mostra resultado 

    printf("\nContagem regressiva em numeros impares, apartir de %d:\n\n", numero);
    impar(numero); // chamada da função que ira mostar a contagem regressiva
   
    return 0;
}
