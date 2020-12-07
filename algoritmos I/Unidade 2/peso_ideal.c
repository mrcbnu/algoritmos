#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "portuguese" );

    char sexo;
    float altura,peso;

    printf( "Qual o sexo (M/F)? " );
    scanf( "%c", &sexo );

    printf( "Qual a altura (metros)? " );
    scanf( "%f", &altura );

    switch( sexo ){
        case 'f': case 'F':  peso = 62.1 * altura - 44.7;
                             printf( "\nSeu peso ideal é de %.2f kg\n", peso );
                             break;

        case 'm': case 'M':  peso = 72.7 * altura - 58;
                             printf( "\nSeu peso ideal é de %.2f kg\n", peso );
                             break;

        default : printf( "\nErro: sexo inválido!\n" );
                  break;
    }
}
