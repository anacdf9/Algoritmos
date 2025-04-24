#include <stdio.h>
#include <stdlib.h>

int main()

{
   int val1,val2,val3;
   float resultado;
   printf("Digite a primeira nota: ");
    scanf("%d", &val1);
    printf("Digite a segunda nota: ");
    scanf("%d", &val2);
    printf("Digite a terceira nota: ");
    scanf("%d", &val3);
    resultado = (val1 + val2 + val3) / 3.0;
    printf("A média aritimética das três notas é: %.2f\n", resultado);

    return 0;
}