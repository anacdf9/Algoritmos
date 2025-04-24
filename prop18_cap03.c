#include <stdio.h>
#include <stdlib.h>

int main()
{
   int temp;

    printf("Digite a temperatura em graus Celsius: ");
    scanf("%d", &temp);

    // F = 180 * (c+32) / 100

    printf("A temperatura em graus Fahrenheit é: %.2f\n", (180.0 * (temp + 32)) / 100.0);
    return 0;
}
