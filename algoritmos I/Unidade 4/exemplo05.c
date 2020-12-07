#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale( LC_ALL, "portuguese" );
    srand( time(NULL) );

    int A[3][4], B[3][4], C[3][4];
    int i,j;

    for( i=0; i<3; i++ ){
        for( j=0; j<5; j++ ){
            A[i][j] = rand() % 5;
            B[i][j] = rand() % 5;
        }
    }

    for( i=0; i<3; i++ ){
        for( j=0; j<4; j++ ){
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    printf( "\nMatriz A:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<4; j++ ){
            printf( "\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf( "\nMatriz B:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<4; j++ ){
            printf( "\t%d", B[i][j]);
        }
        printf("\n");
    }
    printf( "\nMatriz C:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<4; j++ ){
            printf( "\t%d", C[i][j]);
        }
        printf("\n");
    }
    printf( "\n" );
}
