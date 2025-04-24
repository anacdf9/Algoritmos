#include <stdio.h>
#include <stdlib.h>

int main()
{
   int ang1, ang2;

   printf("Digite o valor do primeiro ângulo: ");
   scanf("%d", &ang1);

   printf("Digite o valor do segundo ângulo: ");
    scanf("%d", &ang2);

    printf("O valor do terceiro ângulo é: %d\n", 180 - (ang1 + ang2));

    return 0;
}
