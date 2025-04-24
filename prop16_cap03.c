#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int c1, c2;

    printf("Digite o valor do 1º cateto: ");
    scanf("%d", &c1);

    printf("Digite o valor do 2º cateto: ");
    scanf("%d", &c2);

    printf("O valor da hipotenusa é: %.2f\n", sqrt((c1 * c1) + (c2 * c2)));
    // a² + b² = c²
    // c = sqrt(a² + b²)
    return 0;
}
