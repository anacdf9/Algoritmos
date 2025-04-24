#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float deposito, juros;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
 
    printf("Digite a taxa de juros: ");
    scanf("%f", &juros);
    juros = (juros/100);

    deposito = deposito + (deposito*juros);


    printf ("O valor total do deposito com juros é: %.2f\n", deposito);

    return 0;
}
