#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int num;

    do{
        printf( "Entre com um n�mero positivo: " );
        scanf( "%d", &num );
    }while(num<=0);

    printf( "\nO valor digitado foi: %d\n", num );
}
