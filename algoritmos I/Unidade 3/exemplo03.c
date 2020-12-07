#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int operando1=1, operando2, calculo;

    while( operando1 <= 10 ){
        operando2 = 1;
        while( operando2 <= 10 ){
            calculo = operando1 * operando2;
            printf( "\n%d * %d = %d", operando1, operando2, calculo );
            operando2++;
        }
        operando1++;
        printf( "\n\n" );
    }

    return 0;

}
