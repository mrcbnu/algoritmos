#include <stdio.h>
#include <locale.h>
int main() 
{

    setlocale(LC_ALL, "Portuguese");

    float com, lar, alt; // comp = comprimento, lar = largura, alt = altura
    float base, lateral1, lateral2, area_int, area_ext;
    float valor_un, valor_tot, rend_lata, rend_total ; 

    // ENTRADA DAS MEDIDAS DA CAIXA

    printf("----------------------------------------------------");
    printf("\nDigite as medidas de uma caixa (com x lar x alt) ");

    printf("\nComprimento: ");
    scanf("%f", &com);

    printf("Largura: ");
    scanf("%f", &lar);

    printf("Altura: ");
    scanf("%f", &alt);

    // ENTRADA DOS DADOS DA TINTA

    printf("\n----------------------------------------------------");
    printf("\nDigite o valor e rendimento de uma lata e tinta");

    printf("\nValor: R$ ");
    scanf("%f", &valor_un);

    printf("Rendimento da lata (cm2): ");
    scanf("%f", &rend_lata);

    // CALCULOS 

    base = com * lar; // calcula a area da base da caixa
    lateral1 = com * alt; // calcula a area da lateral maior
    lateral2 = lar * alt; // calcula a area da lateral menor

    area_int = area_ext = (base * 2) + (lateral1 * 2) + (lateral2 * 2); // calculo da area interna e externa

    rend_total = area_int / rend_lata; // calcula quantidade de tinta necessario 
    valor_tot = rend_total * valor_un; // calcula o custo total para pintar

    // ARESENTAÇÃO DOS RESULTADOS

    //a) quantidade total de tinta necessária para pintar a parte interna da caixa, bem como o valor gasto
    printf("\n----------------------------------------------------");
    printf("\nA area interna da caixa a ser pintada é de %f cm2", area_int);
    printf("\nSerá necessário(s) %f lata(s) de tinta a um custo de R$ %f", rend_total, valor_tot);

    //b) quantidade total de tinta necessária para pintar a parte externa da caixa, bem como o valor gasto
    printf("\n----------------------------------------------------");
    printf("\nA area externa da caixa a ser pintada é de %f cm2", area_ext);
    printf("\nSerá necessário(s) %f lata(s) de tinta a um custo de R$ %f", rend_total, valor_tot);

    //c) quantidade total de tinta necessária para pintar toda a caixa, bem como o valor gasto
    printf("\n----------------------------------------------------");
    printf("\nA area total da caixa a ser pintada é de %f cm2", area_int + area_ext);
    printf("\nSerá necessário(s) %f lata(s) de tinta a um custo de R$ %f", rend_total * 2, valor_tot * 2);
    
    return 0;

}