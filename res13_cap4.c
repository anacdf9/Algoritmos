#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n, salario;

    printf("MENU DE OPÇÕES\n"
        "1. Imposto\n"
        "2. Novo salário\n"
        "3. Classificação\n");
    printf("Digite o código correspondente ao cargo do funcionário: ");
    scanf("%f", &n);

    if (n==1)
    {
        printf("Digite o salário do funcionário: ");
        scanf("%f", &salario);
        if (salario < 500)
        {
            printf("O imposto é: %.2f", salario * 0.05);
        
        }
        else if (salario >= 500 && salario <= 850)
        {
            printf("O imposto é: %.2f", salario * 0.10);
        
        }
        else if (salario > 850)
        {
            printf("O imposto é: %.2f", salario * 0.15);
        
        }
    }

    if (n == 2)
    {
        printf("Digite o salário do funcionário: ");
        scanf("%f", &salario);
        if (salario < 450)
        {
            printf("O novo salário do funcionário é: %.2f", salario + 100);
        
        }
        else if (salario >= 450 && salario < 750)
        {
            printf("O novo salário do funcionário é: %.2f", salario + 75);
        
        }
        else if (salario >= 750 && salario <= 1500)
        {
            printf("O novo salário do funcionário é: %.2f", salario + 50);
        
        }
        else if (salario > 1500)
        {
            printf("O novo salário do funcionário é: %.2f", salario + 25);
        
        }
    }
    if (n == 3)
    {
        printf("Digite o salário do funcionário: ");
        scanf("%f", &salario);
        if (salario <= 700)
        {
            printf("Mal remunerado \n");
        }
        else if (salario > 700)
        {
            printf("Bem remunerado\n");
        }
    }

return 0;
}
