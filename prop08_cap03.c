#include <stdio.h>
#include <stdlib.h>

int main()
{
   float peso1;

   printf("Digite o peso da pessoa (em Kg): ");
    scanf("%f", &peso1);

    printf("O peso da pessoa em gramas é: %.2f g\n", peso1 * 1000);
    
    return 0;
}