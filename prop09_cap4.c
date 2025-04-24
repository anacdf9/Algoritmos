#include <stdio.h>
#include <stdlib.h>


int main()
{
    float smed;
    printf("Digite o saldo médio do cliente:");
    scanf("%f", &smed);
        if (smed <= 200) 
        {
            printf("O saldo médio é: R$%.2f\n", smed);
            printf("Sendo assim, o crédito especial do cliente é de: R$%.2f\n", smed * 0.1);
        }
        else if (smed > 200 && smed <= 300) 
        {
            printf("O saldo médio é: R$%.2f\n", smed);
            printf("Sendo assim, o crédito especial do cliente é de: R$%.2f\n", smed * 0.2);
        }
        else if (smed > 300 && smed <= 400)
        {
            printf("O saldo médio é: R$%.2f\n", smed);
            printf("Sendo assim, o crédito especial do cliente é de: R$%.2f\n", smed * 0.25);
        }

        else if (smed > 400)
        {
            printf("O saldo médio é: R$%.2f\n", smed);
            printf("Sendo assim, o crédito especial do cliente é de: R$%.2f\n", smed * 0.3);
        }

    return 0;
}
