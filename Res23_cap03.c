#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float numero;

    printf("Digite um número: ");
    scanf("%f", &numero);

    printf("A parte inteira desse número é: %.0f\n", numero); // aqui eu to imprimindo o número, com 0 casas decimais, ou seja, a parte inteira do número

    printf("A parte decimal desse número é: %.2f\n", numero - (int)numero); // aqui eu to imprimindo o número, menos a parte inteira do número, ou seja, a parte decimal do número, com 2 casas decimais    

    printf (" O número arredondado é: %.0f\n", numero + 0.5); // aqui eu to imprimindo o número, mais 0.5, ou seja, arredondando o número, com 0 casas decimais

    return 0;

}
