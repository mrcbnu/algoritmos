#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    int i=1, j, res;

    while( i <= 10 ){
        j = 1;

        printf( "\nTabuada do %d", i );
        while( j <= 10 ){
            res = i * j;
            printf( "\n\t%d x %d = %d", i, j, res );
            j = j + 1;
        }

        i = i + 1;
    }
    printf( "\n" );
}
