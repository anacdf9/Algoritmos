#include <stdio.h>
#include <stdlib.h>

int main()
{
    int codEst, codCarg;
    float peso, imposto,valor;

    printf("Digite o código de origem da carga do caminhão (1 a 5): \n");
    scanf("%d", &codEst);

    printf("Digite o peso da carga (em toneladas): \n");
    scanf("%f", &peso);

    printf("Digite o código da carga (de 10 a 40): \n");
    scanf("%d", &codCarg);

    peso = peso * 1000; // peso em kg
    printf("O peso da carga convertido em quilos é: %.2f\n", peso);

    // estado 1
    if (codEst == 1 && codCarg >= 10 && codCarg <= 20)
    {
    valor = 100 * peso;
    imposto = valor * 0.35;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  

    else if (codEst == 1 && codCarg >= 21 && codCarg <= 30)
    {
    valor = 250 * peso;
    imposto = valor * 0.35;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }

    else if (codEst == 1 && codCarg >= 31 && codCarg <= 40)
    {
    valor = 340 * peso;
    imposto = valor * 0.35;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  
    

    // estado 2
    if (codEst == 2 && codCarg >= 10 && codCarg <= 20)
    {
    valor = 100 * peso;
    imposto = valor * 0.25;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  
    
    else if (codEst == 2 && codCarg >= 21 && codCarg <= 30)
    {
    valor = 250 * peso;
    imposto = valor * 0.25;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }

    else if (codEst == 2 && codCarg >= 31 && codCarg <= 40)
    {
    valor = 340 * peso;
    imposto = valor * 0.25;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  

    // estado 3
    if (codEst == 3 && codCarg >= 10 && codCarg <= 20)
    {
    valor = 100 * peso;
    imposto = valor * 0.15;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  
    
    else if (codEst == 3 && codCarg >= 21 && codCarg <= 30)
    {
    valor = 250 * peso;
    imposto = valor * 0.15;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }

    else if (codEst == 3 && codCarg >= 31 && codCarg <= 40)
    {
    valor = 340 * peso;
    imposto = valor * 0.15;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  

    // estado 4
    if (codEst == 4 && codCarg >= 10 && codCarg <= 20)
    {
    valor = 100 * peso;
    imposto = valor * 0.05;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  
    
    else if (codEst == 4 && codCarg >= 21 && codCarg <= 30)
    {
    valor = 250 * peso;
    imposto = valor * 0.05;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }

    else if (codEst == 4 && codCarg >= 31 && codCarg <= 40)
    {
    valor = 340 * peso;
    imposto = valor * 0.05;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  

    // estado 5
    if (codEst == 5 && codCarg >= 10 && codCarg <= 20)
    {
    valor = 100 * peso;
    imposto = valor * 0.00;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }  
    
    else if (codEst == 5 && codCarg >= 21 && codCarg <= 30)
    {
    valor = 250 * peso;
    imposto = valor * 0.00;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    }

    else if (codEst == 5 && codCarg >= 31 && codCarg <= 40)
    {
    valor = 340 * peso;
    imposto = valor * 0.00;
     printf("O preço da carga do caminhão é: R$%.2f\n ", valor);
     printf("O valor do imposto é: R$%.2f\n", imposto);
     printf("O valor total transportado pelo caminhão é: %.2f\n", valor + imposto);
    } 
    return 0;
}
