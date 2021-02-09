// TADS Uniavan 
// Disciplina: Algoritmo II
// AV1 Pergunta 1
// Autor: Márcio Alves
// Escreva um programa que receba dois números inteiros via teclado e, usando FUNÇÕES, 
// realiza o cálculo da soma, subtração, multiplicação e divisão destes números. Faça uma 
// função separada para cada uma das operações

#include <stdio.h>
#include <locale.h>


int soma(a, b){ // função que retorna a soma dos paramentros
    return a + b;
}

int subtrai(a, b){ // função que retorna a diferença dos paramentros
    return a - b;
}

int multiplica(a, b){ // função que retorna a multiplicação dos paramentros
    return a * b;
}

float divide(float a, float b){ // função que retorna a divisão dos paramentros
    return a / b;
}
int main(){
    setlocale( LC_ALL, "portuguese" );
    
    int num1 , num2;

    // entrada dos valores 

    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);
    
    // mostra os resultados das funções

    printf("\n%d + %d = %d", num1, num2, soma(num1, num2));
    printf("\n%d -  %d = %d", num1, num2, subtrai(num1, num2));
    printf("\n%d * %d = %d", num1, num2, multiplica(num1, num2));
    printf("\n%d / %d = %.2f", num1, num2, divide(num1, num2));
    
    return 0;

}
 