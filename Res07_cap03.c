#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);
     
    salario = (salario * 0.90) + 50;


    printf("O valor do salário com o desconto mais a gratificação é: %.2f\n", salario);

    return 0;
}
