#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int contador;

   for( contador=1 ; contador <= 10 ; contador++ ){
        printf( "\nContador %d", contador );
    }
    printf( "\nContador ap�s o la�o %d\n", contador );
}
