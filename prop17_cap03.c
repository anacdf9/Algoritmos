#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    // comprimento da esfera = 2 * pi * r
    // área = pi* r²
    // volume = 4/3 * pi * r³

   int raio;
   const float pi = 3.14;
   
    printf("Digite o valor do raio da esfera: ");
    scanf("%d", &raio);

    printf("O comprimento da esfera é: %.2f\n", 2 * pi * raio);
    printf("A área da esfera é: %.2f\n", pi * (raio * raio));
    printf("O volume da esfera é: %.2f\n", (4.0 / 3.0) * pi * (raio * raio * raio));

    return 0;
}
