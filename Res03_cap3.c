#include <stdio.h>
#include <stdlib.h>

int main()
{
    int p1,p2,p3;
    float nota1, nota2, nota3, media;
    float resultado;

    printf ("Digite a primeira nota: ");
    scanf ("%f", &nota1);
    printf ("digite o primeiro peso: ");
    scanf ("%d", &p1);

    printf ("Digite a segunda nota: ");
    scanf ("%f", &nota2);
    printf ("digite o segundo peso: ");
    scanf ("%d", &p2);

    printf ("Digite a terceira nota: ");
    scanf ("%f", &nota3);
    printf ("digite o terceiro peso: ");
    scanf ("%d", &p3);

    media = p1+p2+p3;

    resultado = ((nota1*p1) + (nota2*p2)+ (nota3*p3))/ media;

    printf ("A média ponderada é: %.2f\n", resultado);

    return 0;
}
