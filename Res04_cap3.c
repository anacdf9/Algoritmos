#include        <stdio.h>
#include        <stdlib.h>
#include        <string.h>
#include        <math.h>

int main()
{
    float salário1, resultado;

    printf("Digite o salário do funcionário que receberá o aumento: ");
    scanf("%f", &salário1);

    resultado = salário1 * 1.25;

    printf("O novo salário do funcionário é: %.2f\n", resultado);
    printf("O aumento foi de: %.2f\n", resultado - salário1);

    return 0;
}
