#include <stdio.h>
#include <locale.h>
#include <math.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    float a, b, c, delta, x1, x2;

    printf( "Entre com os coeficientes da equação (a b c): " );
    scanf( "%f %f %f", &a, &b, &c );

    if( a != 0 ){
        delta = b * b - 4 * a * c;
        if( delta > 0 ){ // A equação tem duas raizes diferentes
            x1 = ((-1) * b + sqrt(delta)) / (2*a);
            x2 = ((-1) * b - sqrt(delta)) / (2*a);
            printf( "\nAs raízes desta equação são (%f; %f)\n", x1, x2 );
        }
        if( delta == 0 ){ // A equação tem uma raiza somente
            x1 = (-1) * b / 2 * a;
            printf( "\nA raiz desta equação é %f\n", x1 );
        }
        if( delta < 0 ){
            printf( "\nEsta equação não tem raízes reais!\n" );
        }
    }
    else{
        printf( "\nErro: o coeficiente a não pode ser zero!\n" );
    }
}
