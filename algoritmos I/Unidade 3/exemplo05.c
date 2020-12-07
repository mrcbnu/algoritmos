#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    float salario, soma=0;
    int cont=1;

    do{
        printf( "Entre com salário (%d): ", cont );
        scanf( "%f", &salario );
        soma = soma + salario;
        cont++;   // cont = cont + 1;
    }while(cont<=10);

    printf( "\nA soma dos salários é %f\n", soma );

}
