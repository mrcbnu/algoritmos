#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    float nota1, nota2, media;

    printf( "Digite a primeira nota: ");
    scanf( "%f", &nota1 );
    printf( "Digite a segunda nota: " );
    scanf( "%f", &nota2 );

    media = (nota1 + nota2) / 2;

    if( media >= 6 ){
        printf( "\nVoc� foi aprovado com m�dia de %f\n", media );
    }
    else {
        printf( "\nInfelizmente, sua m�dia foi de %f e voc� n�o foi aprovado!\n", media );
    }

}




