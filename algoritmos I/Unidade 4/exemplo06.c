#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main(){
    setlocale( LC_ALL, "portuguese" );
    srand( time(NULL) );

    int A[3][3], B[3][3], C[3][3];
    int i,j,k;

    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            A[i][j] = rand() % 5;
            B[i][j] = rand() % 5;
        }
    }

    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            C[i][j] = 0;
            for(k=0; k<3; k++ ){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf( "\nMatriz A:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            printf( "\t%d", A[i][j]);
        }
        printf("\n");
    }
    printf( "\nMatriz B:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            printf( "\t%d", B[i][j]);
        }
        printf("\n");
    }
    printf( "\nMatriz C:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<3; j++ ){
            printf( "\t%d", C[i][j]);
        }
        printf("\n");
    }
    printf( "\n" );
}
