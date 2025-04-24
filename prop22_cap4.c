#include <stdio.h>
#include <stdlib.h>

int main()

{
    int idade;
    float peso;

    printf("Digite a idade :\n");
    scanf("%d", &idade);
    printf("Digite o peso :\n");
    scanf("%f", &peso);

    if (idade < 20 && peso < 60)
    {
        printf("A pessoa se encaixa no grupo 9\n");
    }
    else if (idade < 20 && peso >= 60 && peso <= 90)
    {
        printf("A pessoa se encaixa no grupo 8\n");
    }
    else if (idade < 20 && peso > 90)
    {
        printf("A pessoa se encaixa no grupo 7\n");
    }
    else if (idade >= 20 && idade <= 50 && peso < 60)
    {
        printf("A pessoa se encaixa no grupo 6\n");
    }
    else if (idade >= 20 && idade <= 50 && peso >= 60 && peso <= 90)
    {
        printf("A pessoa se encaixa no grupo 5\n");
    }
    else if (idade >= 20 && idade <= 50 && peso > 90)
    {
        printf("A pessoa se encaixa no grupo 4\n");
    }
    else if (idade > 50 && peso < 60)
    {
        printf("A pessoa se encaixa no grupo 3\n");
    }
    else if (idade > 50 && peso >= 60 && peso <= 90)
    {
        printf("A pessoa se encaixa no grupo 2\n");
    }
    else if (idade > 50 && peso > 90)
    {
        printf("A pessoa se encaixa no grupo 1\n");
    }
    return 0;
}
