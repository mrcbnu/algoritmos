#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    int num;

    printf( "Qual o n�mero do m�s (1-12)? " );
    scanf( "%d", &num );

    switch( num ){
        case 1 : printf( "\nM�s de Janeiro\n" );
                 break;
        case 2 : printf( "\nM�s de Fevereiro\n" );
                 break;
        case 3 : printf( "\nM�s de Mar�o\n" );
                 break;
        case 4 : printf( "\nM�s de Abril\n" );
                 break;
        case 5 : printf( "\nM�s de Maio\n" );
                 break;
        case 6 : printf( "\nM�s de Junho\n" );
                 break;
        case 7 : printf( "\nM�s de Julho\n" );
                 break;
        case 8 : printf( "\nM�s de Agosto\n" );
                 break;
        case 9 : printf( "\nM�s de Setembro\n" );
                 break;
        case 10 : printf( "\nM�s de Outubro\n" );
                 break;
        case 11 : printf( "\nM�s de Novembro\n" );
                 break;
        case 12 : printf( "\nM�s de Dezembro\n" );
                 break;
        default : printf( "\nErro: n�mero de m�s errado!\n" );
                  break;
    }
}
