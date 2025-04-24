#include <stdio.h>
#include <stdlib.h>

int main()

{
   int val1,val2,val3,val4, resultado;
   printf("Digite o primeiro valor: ");
    scanf("%d", &val1);
    printf("Digite o segundo valor: ");
    scanf("%d", &val2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &val3);
    printf("Digite o quarto valor: ");
    scanf("%d", &val4);
    resultado = (val1 + val2 + val3 + val4);
    printf("A soma dos quatro valores é: %d\n", resultado);

    return 0;
}
