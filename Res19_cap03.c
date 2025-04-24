#include <stdio.h>
#include <stdlib.h>

int main()
{
    int altura, objetivo;
    const float altura_degrau = 0.30; // Cada degrau tem 0.30m de altura

    printf("Digite a altura que deseja alcançar (em m): ");
    scanf("%d", &altura);

    objetivo = (int)((float)altura / altura_degrau); // Calcula o número de degraus necessários

    printf("Você precisa de %d degraus para alcançar a altura de %d m\n", objetivo, altura);
    return 0;
}