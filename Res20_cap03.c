#include  <stdio.h>
#include  <stdlib.h>
#include <math.h>

int main()
{
    int angulo, altura;
    float comprimento;
    const float pi = 3.14;
    float rad = pi / 180;

    printf("Digite o angulo de inclinação da escada: ");
    scanf("%d", &angulo);
    

    printf("Digite a altura da parede: ");
    scanf("%d", &altura);

   comprimento = altura / sin(angulo * rad);

    printf("A escada tem %.2f metros de comprimento\n", comprimento);


    return 0;
}
