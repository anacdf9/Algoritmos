#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float espetaculo, convite, minimo;

    printf("Digite o valor do espetaculo: ");
    scanf("%f", &espetaculo);

    printf("Digite o valor do convite: ");
    scanf("%f", &convite);  

    minimo = espetaculo / convite;

    printf("O valor minimo de convites a serem vendidos é: %.0f\n", minimo); 
    return 0;
}
