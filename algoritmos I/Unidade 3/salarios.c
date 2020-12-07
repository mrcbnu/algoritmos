#include <stdio.h>
#include <locale.h>

#define TAM 10

int main(){
    setlocale( LC_ALL, "portuguese" );

    float soma=0, media, salario;
    int cont=1;

    while( cont <= TAM ){
        printf( "Entre com salário do funcionário %d: ", cont );
        scanf( "%f", &salario );
        soma = soma + salario;
        cont = cont + 1;
    }
    media = soma / TAM;

    printf( "\nA soma total dos salários é de R$ %.2f", soma );
    printf( "\nA média dos salários é de R$ %.2f\n", media );
}
