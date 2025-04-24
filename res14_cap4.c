#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salario);

    if (salario <= 500)
    {
        printf(" O salario com bonificação e auxílio escola é: %.2f", salario + (salario * 0.05) + 150);
    }
    else if (salario > 500 && salario <= 600)
    {
        printf(" O salario com bonificação e auxílio escola é: %.2f", salario + (salario * 0.12) + 150);
    }
    else if (salario > 600 && salario <= 1200)
    {
        printf(" O salario com bonificação e auxílio escola é: %.2f", salario + (salario * 0.12) + 100);
        
    }
    else if (salario > 1200)
    {
        printf(" O salario com auxílio escola é: %.2f", salario + 100);
        
    }
   
    return 0;
}
