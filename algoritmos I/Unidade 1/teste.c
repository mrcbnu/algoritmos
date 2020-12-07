#include <stdio.h>

int main(){

    int numero;

    printf("digite um numero ");
    scanf("%d", &numero);    
         
    if ( numero < 0 ){
        printf( "o numero %d é negativo", numero);
    } else if ( numero > 0 ){
        printf( "o numero %d é positivo", numero);
    } else {
        printf( "você digitou o numero zero");
    }
   
    return 0;
}