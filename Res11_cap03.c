#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>

int main()
{
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);   

    if (numero > 0) {
        printf("O número %d ao quadrado é: %d\n", numero, numero * numero);
        printf("O número %d ao cubo é: %d\n", numero, numero * numero * numero);
        printf("a raiz quadrada de %d é: %.2f\n", numero, sqrt(numero));
        printf("a raiz cubica de %d é: %.2f\n", numero, cbrt(numero));

    } else {
        printf("Por favor, digite um numero positivo maior que zero. \n");

    }
    
    return 0;
}