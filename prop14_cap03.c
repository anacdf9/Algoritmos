#include <stdio.h>
#include <stdlib.h>

int main()
{
   int nasc, atual;

   printf("Digite o ano de nascimento: ");
     scanf("%d", &nasc);

     printf("Digite o ano atual: ");
     scanf("%d", &atual);

     printf("A idade da pessoa é: %d anos\n", atual - nasc);
     printf("A idade da pessoa em meses é: %d meses\n", (atual - nasc) * 12);
     printf("A idade da pessoa em semanas é: %d semanas\n", (atual - nasc) * 12 * 4);
     printf("A idade da pessoa em dias é: %d dias\n", (atual - nasc) * 12 * 4 * 7);
     
    return 0;
}
