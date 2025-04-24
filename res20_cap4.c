#include <stdio.h>
#include <stdlib.h>
int main()
{
    int cod1, codPais;
    float peso,valor, imposto;

    printf("Digite o código do produto (1 a 10): ");
    scanf("%d", &cod1);

    printf("Digite o código do país (1 a 3): ");
    scanf("%d", &codPais);

    printf("Digite o peso do produto (em Kg): ");
    scanf("%f", &peso);
    peso = peso * 1000; // Convertendo para gramas
    
    printf("Peso do produto: %.2f gramas\n", peso);

  //codigo do pais 1
    if (cod1 == 1 && cod1 <= 4 && codPais ==  1)
    {
        valor = peso * 10;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é R$0,00 \n");
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor);

    }
     else if (cod1 == 5 && cod1 <= 7 && codPais ==  1)
    {
        valor = peso * 25; //valor do produto por grama
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é R$0,00 \n");
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor);

    }
    else if (cod1 == 8 && cod1 <= 10 && codPais ==  1)
    {
        valor = peso * 35;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é R$0,00 \n"); // imposto 0%
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor);

    }

    // codigo do pais 2
    if (cod1 == 1 && cod1 <= 4 && codPais ==  2)
    {
        valor = peso * 10;
        imposto = valor * 0.15; //valor do imposto sobre o produto
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }
    else if (cod1 == 5 && cod1 <= 7 && codPais ==  2)
    {
        valor = peso * 25;
        imposto = valor * 0.15;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }
    else if (cod1 == 8 && cod1 <= 10 && codPais ==  2)
    {
        valor = peso * 35;
        imposto = valor * 0.15;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }

    //codigo do pais 3
    if (cod1 == 1 && cod1 <= 4 && codPais ==  3)
    {
        valor = peso * 10;
        imposto = valor * 0.25;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }
    else if (cod1 == 5 && cod1 <= 7 && codPais ==  3)
    {
        valor = peso * 25;
        imposto = valor * 0.25;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }
    else if (cod1 == 8 && cod1 <= 10 && codPais ==  3)
    {
        valor = peso * 35;
        imposto = valor * 0.25;
        printf("O preço total: R$%.2f\n", valor);
        printf("O valor do imposto é: R$ %.2f \n", imposto);
        printf("O valor total do produto com o imposto é: R$%.2f\n", valor + imposto);
    }
    return 0;
}
