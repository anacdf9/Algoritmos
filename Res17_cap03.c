#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float deposito, atual;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

   atual = deposito - (deposito * 0.0038); // o cpmf é 0.38% do valor do deposito, ou seja, 0.0038 * deposito
   atual= atual - (deposito * 0.0038); // 

   printf("O saldo atual: %.2f \n", atual); // imprime o valor do deposito menos o cpmf

    return 0;
}