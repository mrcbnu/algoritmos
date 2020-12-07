#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    int num;

    printf( "Qual o número do mês (1-12)? " );
    scanf( "%d", &num );

    switch( num ){
        case 1 : printf( "\nMês de Janeiro\n" );
                 break;
        case 2 : printf( "\nMês de Fevereiro\n" );
                 break;
        case 3 : printf( "\nMês de Março\n" );
                 break;
        case 4 : printf( "\nMês de Abril\n" );
                 break;
        case 5 : printf( "\nMês de Maio\n" );
                 break;
        case 6 : printf( "\nMês de Junho\n" );
                 break;
        case 7 : printf( "\nMês de Julho\n" );
                 break;
        case 8 : printf( "\nMês de Agosto\n" );
                 break;
        case 9 : printf( "\nMês de Setembro\n" );
                 break;
        case 10 : printf( "\nMês de Outubro\n" );
                 break;
        case 11 : printf( "\nMês de Novembro\n" );
                 break;
        case 12 : printf( "\nMês de Dezembro\n" );
                 break;
        default : printf( "\nErro: número de mês errado!\n" );
                  break;
    }
}
