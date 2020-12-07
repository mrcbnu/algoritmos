#include <stdio.h>
#include <locale.h>

int main(){    
    setlocale ( LC_ALL, "portuguese" );

    int contador = 1;

    while (contador <= 10)
    {
        printf ("\nContador %d", contador);
        contador = contador +1;
    }
    printf("\nfim do laço");
    printf ("\nContador %d", contador);  
    
}