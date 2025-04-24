#include  <stdio.h>
#include  <stdlib.h>

int main()
{
   int nascimento, atual;

   printf("Digite o ano de nascimento: ");
   scanf("%d", &nascimento);

    printf("Digite o ano atual: ");
    scanf("%d", &atual);

    printf("A idade da pessoa é: %d \n", atual - nascimento);


    return 0;
}
