#include <stdio.h>
#include <stdlib.h>

int main()
{
    double angulo;
    int voltas = 0;
    char sentido[15];

    printf("Digite o valor do angulo em graus: ");
    scanf("%lf", &angulo);

    // Reduzir o ângulo para o intervalo [-360, 360]
    if (angulo > 360 || angulo < -360) {
        voltas = (int)(angulo / 360);
        angulo = angulo - voltas * 360;
    }

    // Determinar o sentido da volta
    if (voltas > 0) {
        sprintf(sentido, "anti-horario");
    } else if (voltas < 0) {
        sprintf(sentido, "horario");
    } else {
        sprintf(sentido, "nenhum");
    }

    // Ajustar o ângulo para o intervalo [0, 360]
    if (angulo < 0) {
        angulo += 360;
    }

    // Determinar o quadrante
    int quadrante;
    if (angulo > 0 && angulo <= 90) {
        quadrante = 1;
    } else if (angulo > 90 && angulo <= 180) {
        quadrante = 2;
    } else if (angulo > 180 && angulo <= 270) {
        quadrante = 3;
    } else {
        quadrante = 4;
    }

    // Exibir os resultados
    printf("Angulo reduzido: %.2lf graus\n", angulo);
    printf("Numero de voltas: %d (%s)\n", abs(voltas), sentido);
    printf("Quadrante: %d\n", quadrante);

    return 0;
}
