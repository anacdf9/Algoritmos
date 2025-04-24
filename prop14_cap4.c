#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;
    printf("Digite o salário do funcionário:");
    scanf("%f", &salario);

    if (salario <= 300) 
    {
        salario = salario + (salario * 0.50);
        printf("O novo salário é: R$%.2f\n", salario);
    } 
    else if (salario > 300 && salario < 500) 
    {
        salario = salario + (salario * 0.40);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario > 500 && salario < 700)
    { 
        salario = salario + (salario * 0.30);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario > 700 && salario < 800) 
    {
        salario = salario + (salario * 0.20);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario > 800 && salario < 1000)
    {
        salario = salario + (salario * 0.10);
        printf("O novo salário é: R$%.2f\n", salario);
    }
    else if (salario >= 1000) 
    {
        salario = salario + (salario * 0.05);
        printf("O novo salário é: R$%.2f\n", salario);
    } 

    return 0;
}
