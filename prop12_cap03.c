#include <stdio.h>
#include <stdlib.h>

int main()
{
   float minimo, real;

   printf("Digite o valor do salário mínimo: ");
     scanf("%f", &minimo);

     printf("Digite o valor do salário real: ");
     scanf("%f", &real);

     printf("O salário real em salários mínimos é: %.2f\n", real / minimo);
     
    return 0;
}
