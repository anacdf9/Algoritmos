#include <stdio.h>
#include <stdlib.h>

int main()
{
   float d1, d2;
   // 1m² = 18W    2m² = 36W ...

   printf("Digite o valor do primeiro lado do terreno (em metros): ");
   scanf("%f", &d1);

    printf("Digite o valor do segundo lado do terreno (em metros): ");
    scanf("%f", &d2);

    printf("O terreno tem %.2f m²\n", d1*d2);
    printf(" A potência necessária para o terreno é: %.2f W ", ((d1*d2)*18));
    return 0;
}
