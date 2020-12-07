#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    setlocale(LC_ALL, "portuguese");
    srand( time(NULL) );

    float jogadas, totPont = 0; //QDADE DE JOGADAS E TOTAL DE PONTOS MARCADOS
    int pontos = 0; // FACE E QDADE DE PONTOS POR JOGADA
    float medPont = 0; //MEIDIA DE PONTOS
    float l1, l2, l3, l4, l5, l6 = 0; // CONTADORES DAS FACES
    float p1, p2, p3, p4, p5, p6 = 0; // PORCENTAGENS DAS FACES
    char continua = 'S';
    //l1 = l2 = l3 = l4 = l5 = l6 = jogadas = totPont = 0;

    printf("\n----------------------------------------------");
    printf("\n                 JOGO DE DADOS                ");
    printf("\n----------------------------------------------");
    printf("\n\nCLIQUE EM QUALQUER TECLA PARA JOGAR O DADO\n ");
    getch();

    while (continua == 'S' || continua == 's') // CONDIÇÃO DO LAÇO 
    {
        system("cls"); // LIMPA A TELA

        pontos = 1 + rand() % 6; // SORTEIA A FACE DO DADO 1 A 6
        jogadas++;  //SOMA O TOTAL DE JOGADAS
        printf("\n-------     %.0fº   L A N Ç A M E N T O  ---------", jogadas);
        switch (pontos)
        {
        case 1:
            l1++; // SOMA A QDADE DE VEZES QUE A FACE 1 CAIU
            break;
        case 2:
            l2++; // SOMA A QDADE DE VEZES QUE A FACE 2 CAIU
            break;
        case 3:
            l3++; // SOMA A QDADE DE VEZES QUE A FACE 3 CAIU
            break;
        case 4:
            
            l4++; // SOMA A QDADE DE VEZES QUE A FACE 4 CAIU
            break;
        case 5:
            l5++; // SOMA A QDADE DE VEZES QUE A FACE 5 CAIU
            break;
        case 6:
            l6++; // SOMA A QDADE DE VEZES QUE A FACE 6 CAIU
            break;
        }
        printf("\n\n        O dado caiu na posição . . . ");
        printf(" \n\n                  [ %d ]", pontos);
        totPont = totPont + pontos; // SOMA O TOTAL DE PONTOS
        printf("\n\nVocê marcou %d pontos, somando %.0f pontos", pontos, totPont);
        printf("\n\n----------------------------------------------");
                  
        fflush(stdin);
        printf("\n\nDeseja lançar o dado novamente? [S/N] ");
        scanf("%c", &continua);
    }
    // CALCULOS DO RESULTADO FINAL

    // CALCLULO DA MEDIA DE PONTOS 
    medPont = totPont / jogadas; 
    
    // PORCENTAGEM DE CADA FACE
    p1 = ((l1 / jogadas) * 100); 
    p2 = ((l2 / jogadas) * 100);
    p3 = ((l3 / jogadas) * 100);
    p4 = ((l4 / jogadas) * 100);
    p5 = ((l5 / jogadas) * 100);
    p6 = ((l6 / jogadas) * 100);

    // INFORMAÇÃO DO RESULTADOS
    system("cls");
    printf("\n-------------------------------------------------------------------------------");
    printf("\n                       R E S U L T A D O S                                     ");
    printf("\n-------------------------------------------------------------------------------");
    printf("\nVocê marcou %.0f pontos em %.0f jogadas, uma media de %.2f pontos por jogada\n", totPont, jogadas, medPont);
    printf("\n\nA face 1 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l1, p1);
    printf("\n\nA face 2 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l2, p2);
    printf("\n\nA face 3 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l3, p3);
    printf("\n\nA face 4 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l4, p4);
    printf("\n\nA face 5 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l5, p5);
    printf("\n\nA face 6 apareceu %.0f vezes corespondendo %.2f %% das jogadas", l6, p6);
    printf("\n-------------------------------------------------------------------------------");
    
    return 0;
}