// TADS Uniavan 
// Disciplina: Algoritmo I
// Autor: Márcio Alves

// Faça um programa que lê os conteúdos de dois vetores de 10 posições contendo números inteiros ordenados (já os receba // ordenados – apenas teste isso antes de resolver o problema a seguir) e encontra a união (conjuntos) destes dois
// vetores usando, necessariamente, uma função para isso.

#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int vetA[10], vetB[10], vetC[20], ultimo, i, j, aux;
    
    // ENTRADA NO VETOR A

    printf("\nEntre com os valores do vetor A, em ordem crescente\n");
    
    ultimo = 0; // ARMAZENA O VALOR PARA TESTAR O PROXIMO NUMERO A SER DIGITADO
    
    for (i = 0; i < 10; i++){
        printf("\n%dº valor: ", i +1);
        scanf("%d", &vetA[i]);
 
        while (vetA[i] < ultimo){  // TESTA SE VALOR É INFERIOR AO ULTIMO DIGITADO. 
            printf("\nValor inferior ao ultimo digitado\n%dº valor: ", i +1);
            scanf("%d", &vetA[i]);
        }
        ultimo = vetA[i]; // ARMAZENA O VALOR PARA TESTAR O PROXIMO NUMERO A SER DIGITADO
    }
        
    // ENTRADA NO VETOR B

    printf("\nEntre com os valores do vetor B, em ordem crescente\n");
    
    ultimo = 0; // ARMAZENA O VALOR PARA TESTAR O PROXIMO NUMERO A SER DIGITADO
    
    for (i = 0; i < 10; i++){
        printf("\n%dº valor: ", i +1);
        scanf("%d", &vetB[i]);

        while (vetB[i] < ultimo){  // TESTA SE VALOR É INFERIOR AO ULTIMO DIGITADO.
            printf(" Erro! Valor inferior ao ultimo digitado\n%dº valor: ", i +1);
            scanf("%d", &vetB[i]);
        }
        ultimo = vetB[i]; // ARMAZENA O VALOR PARA TESTAR O PROXIMO NUMERO A SER DIGITADO
        
    }
    
    // UNINDO OS VETORES (A + B = C)
    for (i = 0; i < 10; i++){
        vetC[i] = vetA[i]; // ADICINANDO O VETOR A AO VETOR C
    }
    for (i = 10; i < 20; i++){
        vetC[i] = vetB[i - 10]; // ADICIONANDO O VETOR B AO VETOR C
    }
    for (j = 0; j < 20; j++){           // FUNÇÃO QUE ELIMINA OS VALORES REPITOS DO VETOR C:
        for (i = j + 1; i < 20; i++){   // USANDO A VARREDURA DE VETOR j CONTRA O VETOR i
            if (vetC[j] == vetC[i]){    // QUANDO ENCONTRADO IGUALDADE
                vetC[i] = 0;            // O VALOR DUPLICADO É ZERADO
            }
        }
    }
    // ORDENANDO O VETOR UNIDO

    for (j = 0; j < 20; j++){      // FUNÇÃO QUE ORDENA OS VALORES DO VETOR EM ORDEM CRESCENTE
        for (i = 0; i < 20; i++){  // USANDO A VARREDURA DE VETOR j CONTRA O VETOR i
           if (vetC[j] < vetC[i]){ // SE O VALOR DE j FOR MENOR QUE i
            aux = vetC[j];         // aux RECEBE j (MENOR)
            vetC[j] = vetC[i];     // j (MENOR) RECEBE i (MAIOR)
            vetC[i] = aux;         // i RECEBE aux (MENOR)  -> j TROCA DE LUGAR COM i 
            }
        }
    }
    
    // MOSTRA OS VETORES

    printf("\nVETOR A\n");
    for (i = 0; i < 10; i++){
        printf("%d ", vetA[i]);
    }
    
    printf("\n\nVETOR B\n");

    for (i = 0; i < 10; i++){
        printf("%d ", vetB[i]);
    }

    printf("\n\nVETOR C\n");
    for (i = 0; i < 20; i++){
        if (vetC[i] != 0){          // IMPRIME SOMENTE VALORS DIFERENTES DE ZERO
           printf("%d ", vetC[i]); 
        }

        
    }
    return 0;
}
