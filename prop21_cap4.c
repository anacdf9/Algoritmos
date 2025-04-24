#include <stdio.h>
#include <stdlib.h>

int main()
{

    float prec;
    int p;
    printf("Digite o preço do produto:\n");
    scanf("%f", &prec);

    printf("Digite o código de origem do produto (1 a 30):\n");

    if (prec == 1)
    {
    printf(" O produto vem do sul");
    }
    else if (prec == 2)
    {
    printf(" O produto vem do Norte");
    }
    else if (prec == 3)
    {
    printf(" O produto vem do Leste");
    }
    else if (prec == 4)
    {
    printf(" O produto vem do Oeste");
    }
    else if (prec == 5 || prec == 6)
    {
    printf(" O produto vem do nordeste");
    }
    else if (prec == 7 || prec == 8 || prec == 9)
    {
         printf(" O produto vem do sudeste");
    }
    else if (prec >= 10 && prec <= 20)
    {
         printf(" O produto vem do centro-oeste");
    }
    else if (prec >= 20 && prec <= 30)
    {
         printf(" O produto vem do Nordeste");
    }
   
    return 0;
}
