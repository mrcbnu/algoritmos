#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    char operacao;
    float num1, num2, res;

    printf( "Entre com o primeiro valor: " );
    scanf( "%f", &num1 );
    printf( "Entre com o segundo valor: " );
    scanf( "%f", &num2 );
    fflush( stdin );
    printf( "Entre com a opera��o (+, -, *, /)? " );
    scanf( "%c", & operacao );

    switch( operacao ){
        case '+' : res = num1 + num2;
                   printf( "\nSoma: %f + %f = %f\n", num1, num2, res );
                   break;
        case '-' : res = num1 - num2;
                   printf( "\nDiferen�a: %f - %f = %f\n", num1, num2, res );
                   break;
        case '*' : res = num1 * num2;
                   printf( "\nProduto: %f * %f = %f\n", num1, num2, res );
                   break;
        case '/' : if( num2 != 0 ){
                        res = num1 / num2;
                        printf( "\nDivis�o: %f / %f = %f\n", num1, num2, res );
                   }
                   else{
                        printf( "\nErro: na divis�o o segundo valor n�o pode ser zero!\n" );
                   }
                   break;
        default : printf( "\nErro: opera��o inv�lida!\n" );
    }
}
