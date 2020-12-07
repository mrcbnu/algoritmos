#include <stdio.h>
#include <locale.h>

int main(){
    setlocale( LC_ALL, "Portuguese" );

    char letra;

    printf( "Digite uma letra: " );
    scanf( "%c", &letra );

    switch( letra ){
        case 'A' : case 'E' : case 'I' : case 'O' : case 'U' :
            printf( "\n… vogal!\n" );
            break;

        case 'B': case 'C': case 'D': case 'F': case 'G': case 'H': case 'J': case 'K':
        case 'L': case 'M': case 'N': case 'P': case 'Q': case 'R': case 'S': case 'T':
        case 'V': case 'W': case 'X': case 'Y': case 'Z':
            printf( "\n… consoante!\n" );
            break;

        default: printf( "\nErro: Letra errada!\n" );
                 break;

    }
}
