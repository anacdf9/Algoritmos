#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float pes;

    printf("Digite o valor em pés: ");
    scanf("%f", &pes);

    printf("O valor em polegadas é: %.2f \n", pes * 12);
    printf("O valor em jardas é: %.2f \n", pes /3 );
    printf("O valor em milhas é: %.2f \n", (( pes /3)/1760));
    return 0;
}
