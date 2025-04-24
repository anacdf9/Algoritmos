#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    if (salario < 500) {
        salario = salario + (salario * 0.3);
        printf("O novo salário é: %.2f\n", salario);
    } else if (salario >= 500) {
        printf("O funcionário não tem direito a aumento.\n");
    }
    return 0;
}
