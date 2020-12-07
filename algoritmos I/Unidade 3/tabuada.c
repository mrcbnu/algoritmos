#include <stdio.h>
#include <locale.h>

#define NUM 8

int main(){
    setlocale( LC_ALL, "portuguese" );

    int i=1, res;

    printf( "\nTabuada do %d", NUM );

    while( i <= 10 ){
        res = i * NUM;
        printf( "\n\t%d x %d = %d", i, NUM, res );
        i = i + 1;
    }
    printf( "\n" );
}
