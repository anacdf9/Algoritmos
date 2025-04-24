#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario1, vendas;

   printf("Digite o salário fixo do vendedor: ");
   scanf("%f", &salario1);

    printf("Digite o valor total de vendas do vendedor: ");
    scanf("%f", &vendas);

    vendas = vendas * 0.04;

    printf("O salário final do vendedor é: %.2f\n", salario1 + vendas);

    printf("O valor da comissão é: %.2f\n", vendas);
    return 0;
}
