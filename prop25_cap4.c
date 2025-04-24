#include <stdio.h>

int main()
{
    int horas_extras, horas_falta;
    float H, premio;

    printf("Digite o numero de horas extras (em minutos): ");
    scanf("%d", &horas_extras);
    printf("Digite o numero de horas de falta (em minutos): ");
    scanf("%d", &horas_falta);

    H = horas_extras - (2.0 / 3.0 * horas_falta);

    if (H >= 2400)
    {
        premio = 500.0;
    }
    else if (H >= 1800)
    {
        premio = 400.0;
    }
    else if (H >= 1200)
    {
        premio = 300.0;
    }
    else if (H >= 600)
    {
        premio = 200.0;
    }
    else
    {
        premio = 100.0;
    }

    printf("O valor do premio de Natal e: R$ %.2f\n", premio);

    return 0;
}
