#include <stdio.h>
#include <stdlib.h>

int main()
{
   float horas, hora_extra, salario;
   


   printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salario);

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas);

    printf("Digite o número de horas extras trabalhadas: ");
    scanf("%f", &hora_extra);

    float hora_trabalhada = (1.0 / 8) * salario;
    float v_hora_extra = (1.0 / 4) * salario;

    salario = horas*hora_trabalhada;
    hora_extra = hora_extra * v_hora_extra;

    printf("O valor do salário bruto é: %.2f\n", salario);
    printf(" O valor a receber pela hora extra é: %.2f\n ", hora_extra );

    printf(" O valor do salário a receber é: %.2f\n", salario + hora_extra);
    return 0;
}
