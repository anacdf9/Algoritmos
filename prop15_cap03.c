#include <stdio.h>
#include <stdlib.h>

int main()
{
   float salario, conta1, conta2;

   printf("Digite o valor do salário: ");
    scanf("%f", &salario);

    printf("Digite o valor da 1ª conta: ");
    scanf("%f", &conta1);

    printf("Digite o valor da 2ª conta: ");
    scanf("%f", &conta2);
    
    printf("O valor do salário após o pagamento das contas atrasadas é: %.2f\n", salario  -  ((conta1 * 1.02) + (conta2 * 1.02)));
    return 0;  
}                                                           