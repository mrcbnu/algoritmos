#include <stdio.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

   int i, temp;

   int vetor[8] = {10, 20, 30, 40, 50, 60, 70, 80};
   

   for( i = 0; i < 8; i++ ){

       temp = vetor[i];

       vetor[i] = vetor[8-i];

       vetor[8-i] = temp;

   }
    for (i = 0 ; i < 8; i++){
        printf("%d ", vetor[i]);
    }
}