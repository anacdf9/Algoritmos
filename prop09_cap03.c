#include <stdio.h>
#include <stdlib.h>

int main()
{
   float maior, menor, altura, area;

   printf("Digite o valor da área maior: ");
    scanf("%f", &maior);

    printf("Digite o valor da área menor: ");
    scanf("%f", &menor);

    printf("Digite o valor da altura: ");
    scanf("%f", &altura);

    printf("A área do trapézio é: %.2f\n", ((maior + menor) * altura) / 2);
    return 0;
}
