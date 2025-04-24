#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    char s;
    float prec, aumento, imposto, novo_preco;

    printf("Digite o preço do produto: ");
    scanf("%f", &prec);

    printf("Digite a categoria:");
    printf("\n1 - Limpeza\n2 - Alimentação\n3 - Vestuário\n");
    scanf("%d", &c);

    printf("Digite a situação do produto:");
    printf("\nR - Produtos que necessitam de refrigeração\nN - Produtos que não necessitam de refrigeração\n");
    scanf(" %c", &s);

    if (prec <= 25) 
    {
        if (c == 1) 
        {
            aumento = prec * 0.05;
        }
        else if (c == 2) 
        {
            aumento = prec * 0.08;
        }
        else if (c == 3) 
        {
            aumento = prec * 0.10;
        }
    } 
    else 
    {
        if (c == 1) 
        {
            aumento = prec * 0.12;
        }   
        else if (c == 2) 
        {
            aumento = prec * 0.15;
        }   
        else if (c == 3) 
        {
            aumento = prec * 0.18;
        }
    }

    printf("O valor do aumento é: R$%.2f\n", aumento);

    if (c == 2 || s == 'R' || s == 'r') 
    {
        imposto = prec * 0.05;
    } 
    else 
    {
        imposto = prec * 0.08;
    }
    printf("O valor do imposto é: R$%.2f\n", imposto);

    novo_preco = prec + aumento - imposto;
    printf("O novo preço é: R$%.2f\n", novo_preco);

    if (novo_preco <= 50)
    {
        printf("Classificação: Barato\n");
    }
    else if (novo_preco > 50 && novo_preco <= 120) 
    {
        printf("Classificação: Normal\n");
    }
    else 
    {
        printf("Classificação: Caro\n");
    }

    return 0;
}
