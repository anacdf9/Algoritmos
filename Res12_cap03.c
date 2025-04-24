#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>

int main()
{
    int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf(" O %d elevado a %d é: %d ", num1, num2, (int)pow(num1, num2));
    return 0;
}

