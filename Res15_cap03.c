#include  <stdio.h>
#include  <stdlib.h>

int main(  )

{
    float fabrica, lucro, imposto, final;

    printf("Digite o valor de fabrica: ");
    scanf("%f", &fabrica);

    printf("Digite o percentual do lucro: ");
    scanf("%f", &lucro);    
    lucro = lucro / 100;

    printf("Digite o percentual do imposto: ");
    scanf("%f", &imposto);
    imposto = imposto / 100;

    final = fabrica + (fabrica * lucro) + (fabrica * imposto);

    printf("O valor de venda do carro é: %.2f \n", final);
    printf( "O valor do lucro é: %.2f \n", (fabrica * lucro) );
    printf( "O valor do imposto é: %.2f \n", (fabrica * imposto) );
    return 0;
}
