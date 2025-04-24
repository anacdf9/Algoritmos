#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prec, desc;
    printf("Digite o preço do produto:");
    scanf("%f", &prec);

    if (prec <= 30) 
    {
        printf("O produto não tem desconto\n");
        printf("O novo preço do produto é: R$%.2f\n", prec);
    } 
    else if (prec > 30 && prec <= 100) 
    {
            desc = prec * 0.10;
            prec = prec - desc;
            printf("O desconto é: R$%.2f\n", desc);
            printf("O novo preço do produto é: R$%.2f\n", prec);
    }
    else if (prec > 100)
    { 
        desc = prec * 0.15;
        prec = prec - desc;
        printf("O desconto é: R$%.2f\n", desc);
        printf("O novo preço do produto é: R$%.2f\n", prec);
    }

    return 0;
}
