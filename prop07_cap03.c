#include <stdio.h>
#include <stdlib.h>

int main()
{
   float peso1;

   printf("Digite o peso da pessoa: ");
    scanf("%f", &peso1);

    printf(" O peso da pessoa, caso ela engorde 0.15 do seu peso atual, sera: %.2f\n", peso1 * 1.15);
    printf(" O peso da pessoa, caso ela emagreca 0.20 do seu peso atual, sera: %.2f\n", peso1 * 0.80);
    
    return 0;
}
