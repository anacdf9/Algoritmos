#include <stdio.h>
#include <stdlib.h>

int main()
{
   float nota1, nota2, media;

   printf("Digite a primeira nota (peso 2): ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota (peso 3): ");
    scanf("%f", &nota2);

    media = (nota1 * 2 + nota2 * 3) / (2 + 3);

    printf("A média ponderada entre %.2f e %.2f é: %.2f\n", nota1, nota2, media);

    return 0;
}
