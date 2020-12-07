#include <stdio.h> // biblioteca padrão 
#include <math.h> // biblioteca matematica

int main(){

    float co, ca, hi; // co = cateto oposto , ca = cateto adjacente, hi = hipotenusa

    printf("\nDigite o valor do cateto oposto ");
    scanf("%f", &co);
    
    printf("\nDigite o valor do cateto adjacente ");
    scanf("%f", &ca);

    // calculo do teorema de pitagoras 

    hi = (co * co) + (ca * ca ); 
    hi = sqrt(ld3);  // calcula a raiz quadradra da soma dos quadrados dos catetos, chegando ao valor da hipotenusa

    printf("\nCom base nos dados obtidos, da hipotenusa e: %f", hi);
    return 0;

}