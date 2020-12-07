#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    float a, b, c, delta, x1, x2;

    printf( "Entre com os coeficientes da equa��o (a b c): " );
    scanf( "%f %f %f", &a, &b, &c );

    if( a != 0 ){
        delta = b * b - 4 * a * c;
        if( delta > 0 ){ // A equa��o tem duas raizes diferentes
            x1 = ((-1) * b + sqrt(delta)) / (2*a);
            x2 = ((-1) * b - sqrt(delta)) / (2*a);
            printf( "\nAs ra�zes desta equa��o s�o (%f; %f)\n", x1, x2 );
        }
        if( delta == 0 ){ // A equa��o tem uma raiza somente
            x1 = (-1) * b / 2 * a;
            printf( "\nA raiz desta equa��o � %f\n", x1 );
        }
        if( delta < 0 ){
            printf( "\nEsta equa��o n�o tem ra�zes reais!\n" );
        }
    }
    else{
        printf( "\nErro: o coeficiente a n�o pode ser zero!\n" );
    }
}
