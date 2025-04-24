#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, tempo, imposto = 0, gratif = 0, salario_liquido;
    char categoria;
//imposto = 0 
    printf("Digite o salário do funcionário: \n");
    scanf("%f", &salario);

    printf("Digite o tempo de serviço do funcionário (em anos): \n");
    scanf("%f", &tempo);

    //  imposto
    if (salario < 200)
    {
        imposto = 0;
        printf("O valor do imposto sobre o salário base é R$ 0,00\n");
    }
    else if (salario >= 200 && salario <= 450)
    {
        imposto = salario * 0.03;
        printf("O valor do imposto sobre o salário base é: R$ %.2f\n", imposto);
    }
    else if (salario > 450 && salario < 700)
    {
        imposto = salario * 0.08;
        printf("O valor do imposto sobre o salário base é: R$ %.2f\n", imposto);
    }
    else if (salario >= 700)
    {
        imposto = salario * 0.12;
        printf("O valor do imposto sobre o salário base é: R$ %.2f\n", imposto);
    }

    //  gratificação
    if (salario > 500)
    {
        if (tempo <= 3)
        {
            gratif = 20;
        }
        else
        {
            gratif = 30;
        }
    }
    else // salário até 500
    {
        if (tempo < 3)
        {
            gratif = 23;
        }
        else if (tempo >= 3 && tempo < 6)
        {
            gratif = 35;
        }
        else // 6 anos ou mais
        {
            gratif = 33;
        }
    }

    printf("A gratificação é: R$ %.2f\n", gratif);

    // salário líquido
    salario_liquido = salario - imposto + gratif;
    printf("O salário líquido é: R$ %.2f\n", salario_liquido);

    // Classificação
    if (salario_liquido <= 350)
    {
        categoria = 'A';
    }
    else if (salario_liquido > 350 && salario_liquido <= 600)
    {
        categoria = 'B';
    }
    else
    {
        categoria = 'C';
    }

    printf("A classificação do funcionário é: Categoria %c\n", categoria);

    return 0;
}