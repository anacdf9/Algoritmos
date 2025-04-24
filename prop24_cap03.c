#include <stdio.h>
#include <stdlib.h>

int main()
{
   float dinheiro, dol, marc, libra;

    printf("Digite o valor em dinheiro que quer converter: ");
    scanf("%f", &dinheiro);

    dol = dinheiro / 1.80;
    marc = dinheiro / 2.00;
    libra = dinheiro / 3.57;

    printf("Você possui em dolares (após a conversão) é: %.2f\n", dol);
    printf("Você possui em marcos (após a conversão) é: %.2f\n", marc);
    printf("Você possui em libras (após a conversão) é: %.2f\n", libra);
    return 0;
}
