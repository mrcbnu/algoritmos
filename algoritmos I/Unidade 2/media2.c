#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    float nota1, nota2, media;

    printf( "Digite a primeira nota (0-10): ");
    scanf( "%f", &nota1 );
    printf( "Digite a segunda nota (0-10): " );
    scanf( "%f", &nota2 );

    if( nota1 >= 0 && nota1 <= 10 && nota2 >= 0 && nota2 <= 10 ){
        media = (nota1 + nota2) / 2;
        printf( "\nSua média de %f\n", media );
    }
    else{
        if( nota1 < 0 || nota1 > 10 ) printf( "\nErro:a nota 1 está errada!\n" );
        if( nota2 < 0 || nota2 > 10 ) printf( "\nErro:a nota 2 está errada!\n" );
    }
}




