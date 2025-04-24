#include <stdio.h>
#include <stdlib.h>

int main()
{
    float  vmedia, preco;

    printf("Digite o valor da venda media mensal do produto : ");
    scanf("%f", &vmedia);

    printf("Digite o preço do produto : ");
    scanf("%f", &preco);

        if (vmedia < 500 && preco < 30)
    {
    printf("O valor do produto sofrerá um aumento de 10%% e seu novo valor é: %.2f\n", preco + (preco * 0.10));
    }
         else if (vmedia >= 500 && preco >= 30 && preco < 80)
          {
         printf("O valor do produto sofrerá um aumento de 15%% e seu novo valor é: %.2f\n", preco + (preco * 0.15));
        }  
    else if (vmedia >= 500 && preco >= 80)
    {
    printf("O valor do produto sofrerá uma diminuição de 20%% e seu novo valor é: %.2f\n", preco - (preco * 0.20));
    }
        else if (vmedia >= 500 && vmedia < 1200 && preco < 30)
        {
        printf("O valor do produto sofrerá um aumento de 10%% e seu novo valor é: %.2f\n", preco + (preco * 0.10));
        }
    else if (vmedia >= 500 && vmedia < 1200 && preco >= 30 && preco < 80)
    {
        printf("O valor do produto sofrerá um aumento de 15%% e seu novo valor é: %.2f\n", preco + (preco * 0.15));
    }
        else if (vmedia >= 500 && vmedia < 1200 && preco >= 80)
        {
        printf("O valor do produto sofrerá uma diminuição de 20%% e seu novo valor é: %.2f\n", preco - (preco * 0.20));
        }
    else if (vmedia >= 1200 && preco < 30)
     {
        printf("O valor do produto sofrerá um aumento de 10%% e seu novo valor é: %.2f\n", preco + (preco * 0.10));
     }
         else if (vmedia >= 1200 && preco >= 30 && preco < 80)
        {
        printf("O valor do produto sofrerá um aumento de 15%% e seu novo valor é: %.2f\n", preco + (preco * 0.15));
        }
    else if (vmedia >= 1200 && preco >= 80)
    {
        printf("O valor do produto sofrerá uma diminuição de 20%% e seu novo valor é: %.2f \n", preco - (preco * 0.20));
    }
    
    return 0;
}
