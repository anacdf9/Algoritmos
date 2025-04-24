#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario, valor_trabalhadas,horas_trabalhadas, dependentes, horas_extras;
   

    printf ("Digite o salário minimo: ");
    scanf ("%f", &salario);

    printf ("Digite o número de horas trabalhadas: ");
    scanf ("%f", &horas_trabalhadas);

    printf ("Digite o número de dependentes: ");
    scanf ("%f", &dependentes);

    printf ("Digite o número de horas extras: ");
    scanf ("%f", &horas_extras);
    valor_trabalhadas = salario / 5;
    salario = (horas_trabalhadas * valor_trabalhadas) + (dependentes * 32);
    horas_extras = horas_extras * (valor_trabalhadas * 1.5);

    salario = salario + horas_extras;

    if (salario < 200)
    {
    printf( "O salário é: %.2f\n:", salario + 100);
    }
        else if ( salario >= 200 && salario <= 350)
         {
        printf(" O salário é: %.2f\n", salario - (salario * 0.10) +100);
         }
        else if ( salario > 350 && salario <= 500)
        {
        printf(" O salário é: %.2f\n", salario - (salario * 0.10) +50);
        }
        else if ( salario > 500)
        {
            printf(" O salário é: %.2f\n", salario - (salario * 0.20) +50);
        }


    return 0;
}
