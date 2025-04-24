#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    if (salario <= 300) {
        salario = salario + (salario * 0.35);
        printf("O novo salário é: %.2f\n", salario);
    } else if (salario > 300) {
        salario = salario + (salario * 0.15);
        printf("O novo salário é: %.2f\n", salario);
    }
    return 0;
}
