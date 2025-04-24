#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    if (salario <= 300) 
    {
        salario = salario + (salario * 0.15);
        printf("O novo salário é: R$%.2f\n", salario);
    } 
    else if (salario > 300 && salario < 600) 
    {
        salario = salario + (salario * 0.10);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario >= 600 && salario <= 900)
    {
        salario = salario + (salario * 0.05);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario > 900) 
    {
        printf("O novo salário é: R$%.2f\n", salario);
    } 
    
    return 0;
}