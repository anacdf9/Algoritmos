#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float raio, area;
    const float pi = 3.14; // Definindo pi como uma constante

    printf ("Digite o raio do círculo: ");
    scanf ("%f", &raio);

    area = pi * ( raio * raio );

    printf ("A área do círculo é: %.2f\n", area);
    return 0;
}
