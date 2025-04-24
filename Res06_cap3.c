#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, gratificacao;
    
    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    gratificacao = salario * 0.05;

    salario = salario + gratificacao;

    salario = salario * 0.93; 

    printf("O valor do salário com a gratificação e o desconto é: %.2f\n", salario);
    
    printf("O valor descontado foi 7/100 do salário base com gratificação de 5/100\n");

    // ou resultado = (gratificacao + salario) * 0.93; (declarar resultado como float)
    // printf("O valor do salário com a gratificação e o desconto é: %.2f\n", resultado);

    return 0;
}
