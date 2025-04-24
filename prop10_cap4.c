#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    float p1;
    printf("Digite o preço de fábrica do carro:");
    scanf("%f", &p1);

    if (p1 <= 12000) {
        printf("O preço final do carro é: R$%.2f\n", p1 * 1.05);
    } 
    else if (p1 > 12000 && p1 <= 25000) 
    {
        printf("O preço final do carro é: R$%.2f\n", (p1 * 1.10) + (p1 * 1.15));
    } 
    else if (p1 > 25000) 
    {
        printf("O preço final do carro é: R$%.2f\n", (p1 * 1.15) + (p1 * 1.20));
    }

    return 0;
}
