#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número (exceto 0): ");
    scanf("%d", &num2);

    printf("A divisão entre %d e %d é: %d\n", num1, num2, num1 / num2);

   
    return 0;
}
