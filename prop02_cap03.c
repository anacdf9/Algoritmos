#include <stdio.h>
#include <stdlib.h>

int main()
{
   int num1, num2, num3;

   printf("Digite o primeiro número: ");
   scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);
    
    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    printf(" O produto dos números %d, %d e %d é: %d\n", num1, num2, num3, num1 * num2 * num3);
    
    return 0;
}
