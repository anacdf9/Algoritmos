#include   <stdio.h>
#include         <stdlib.h>

int main()
{
    float salario1, porcentagem, resultado;

    printf("Digite o salário do funcionário que receberá o aumento: ");
    scanf("%f", &salario1);
    printf("Digite a porcentagem do aumento: ");
    scanf("%f", &porcentagem);

    porcentagem = porcentagem / 100.0;
    resultado = salario1 * (1 + porcentagem);

    printf("O novo salário do funcionário é: %.2f\n", resultado);
    printf("O aumento foi de: %.2f\n", resultado - salario1);

    return 0;
}