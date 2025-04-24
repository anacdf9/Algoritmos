#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salário bruto do funcionário:");
    scanf("%f", &salario);

    if (salario <= 350) 
    {
        salario = salario + 100;
        salario = salario * 0.93;
        printf("O novo salário é: R$%.2f\n", salario);
    } 
    else if (salario > 350 && salario < 600) 
    {
        salario = salario + 75;
        salario = salario * 0.93;
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario >= 600 && salario <= 900)
    {
        salario = salario + 50;
        salario = salario * 0.93;
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario > 900) 
    {
        salario = salario + 35;
        salario = salario * 0.93;
        printf("O novo salário é: R$%.2f\n", salario);
    } 
    
    return 0;
}