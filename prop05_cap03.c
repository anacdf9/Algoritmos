#include <stdio.h>
#include <stdlib.h>

int main()
{
    float preço1;

    printf("Digite o preço do produto: ");
    scanf("%f", &preço1);

    preço1 = preço1 * 0.9;

    printf("O preço do produto com desconto de 10/100 é: %.2f\n", preço1);
   
    return 0;
}
