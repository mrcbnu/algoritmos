#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int num, soma=0, cont=0;
    char ch='S';

    while( ch == 'S' || ch == 's' ){
        printf( "\nEntre com o n�mero: " );
        scanf( "%d", &num );
        soma += num;
        cont++;

        fflush(stdin);
        printf( "\nDeseja continuar (S/N)?" );
        scanf( "%c", &ch );
    }

    printf( "\nA soma total foi %d n�meros foi %d", cont, soma );

    printf( "\n" );
}
