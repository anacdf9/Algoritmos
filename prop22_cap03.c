#include <stdio.h>
#include <stdlib.h>

int main()
{
   int lados, diagonais;

   printf("Digite o número de lados do polígono convexo: ");
    scanf("%d", &lados);

    // número de diagonais = n*(n-3)/2
    diagonais = lados * (lados - 3) / 2;
    printf("O número de diagonais do polígono é: %d\n", diagonais);
}
