#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

//
// Escrever um programa que criar duas matrizes 3x4 e as preenche aleatoriamente. Depois deve soma-las armazenar o resultado em outra matriz
//

int main(){
    setlocale( LC_ALL, "portuguese" );
    srand( time(NULL) );

    int mat1[3][5], mat2[3][5], mat3[3][5];

    int i,j;

    for( i=0; i<3; i++ ){
        for( j=0; j<5; j++ ){
            mat1[i][j] = rand() % 50;
            mat2[i][j] = rand() % 50;
            mat3[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    printf( "\nMatriz 1:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<5; j++ ){
            printf( "\t%d", mat1[i][j]);
        }
        printf("\n");
    }
    
    printf( "\nMatriz 2:\n" );
    for( i=0; i<3; i++ ){
        for( j=0; j<5; j++ ){
            printf( "\t%d", mat2[i][j]);
        }
        printf("\n");
    }
    printf("\nMatriz 3:\n");
    for( i=0; i<3; i++ ){
        for( j=0; j<5; j++ ){
            printf( "\t%d", mat3[i][j]);
        }
    printf("\n");
    }
}
