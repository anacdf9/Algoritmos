#include  <stdio.h>
#include <stdlib.h>

int main()
{
    float num1,num2, sub;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);

    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    sub = num1 - num2; // aqui eu to subtraindo o primeiro número pelo segundo número

    printf("A subtração entre %.2f e %.2f é: %.2f\n", num1, num2, sub);
    return 0;
}
