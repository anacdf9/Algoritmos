#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prec;
    printf("Digite o preço do produto:");
    scanf("%f", &prec);

    if (prec <= 50) 
    {
        prec = prec + (prec * 0.05);

    } 
    else if (prec > 50 && prec <= 100) 
    {
        prec = prec + (prec * 0.10);
    }
    else if (prec > 100)
    {
        prec = prec + (prec * 0.15);
    }

    printf("O novo preço é: R$%.2f\n", prec);
    
    if (prec <= 80) 
    {
        printf("O produto é barato\n");
    } 
    else if (prec > 80 && prec <= 120) 
    {
        printf("O produto é normal\n");
    } 
    else if (prec > 120 && prec <= 200) 
    {
        printf("O produto é caro\n");
    }
    else if (prec > 200) 
    {
        printf("O produto é muito caro\n");
    }

    return 0;
}
