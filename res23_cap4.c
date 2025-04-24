#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salario_minimo, horas_trabalhadas, coeficiente, salario_bruto, imposto, gratificacao, auxilio_alimentacao, salario_liquido;
    char turno, categoria;

    // Entrada de dados
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);

    printf("Digite o turno de trabalho (M - Matutino, V - Vespertino, N - Noturno): ");
    scanf(" %c", &turno);

    printf("Digite a categoria (O - Operario, G - Gerente): ");
    scanf(" %c", &categoria);

    printf("Digite o numero de horas trabalhadas no mes: ");
    scanf("%f", &horas_trabalhadas);

    // Calculo do coeficiente de salario
    switch (turno)
    {
    case 'M':
        coeficiente = 0.10 * salario_minimo;
        break;
    case 'V':
        coeficiente = 0.15 * salario_minimo;
        break;
    case 'N':
        coeficiente = 0.12 * salario_minimo;
        break;
    default:
        printf("Turno invalido!\n");
        return 1;
    }

    // Calculo do salario bruto
    salario_bruto = horas_trabalhadas * coeficiente;

    // Calculo do imposto
    if (categoria == 'O')
    {
        if (salario_bruto >= 300)
            imposto = 0.05 * salario_bruto;
        else
            imposto = 0.03 * salario_bruto;
    }
    else if (categoria == 'G')
    {
        if (salario_bruto >= 400)
            imposto = 0.06 * salario_bruto;
        else
            imposto = 0.04 * salario_bruto;
    }
    else
    {
        printf("Categoria invalida!\n");
        return 1;
    }

    // Calculo da gratificacao
    if (turno == 'N' && horas_trabalhadas > 80)
        gratificacao = 50.0;
    else
        gratificacao = 30.0;

    // Calculo do auxilio alimentacao
    if (categoria == 'O' && coeficiente <= 25)
        auxilio_alimentacao = salario_bruto / 3.0;
    else
        auxilio_alimentacao = salario_bruto / 2.0;

    // Calculo do salario liquido
    salario_liquido = salario_bruto - imposto + gratificacao + auxilio_alimentacao;

    // Classificacao do salario liquido
    printf("Salario liquido: %.2f\n", salario_liquido);
    if (salario_liquido < 350)
        printf("Classificacao: Mal remunerado\n");
    else if (salario_liquido >= 350 && salario_liquido <= 600)
        printf("Classificacao: Normal\n");
    else
        printf("Classificacao: Bem remunerado\n");

    return 0;
}
