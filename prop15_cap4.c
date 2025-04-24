#include <stdio.h>
#include <stdlib.h>

int main()
{
    float inv;
    int t;
    printf("Digite o valor do investimento:");
    scanf("%f", &inv);

    printf("Digite o tipo do investimento:");
    printf("\n1 -  Poupança\n2 - Fundo de renda fixa\n");
    scanf("%d", &t);
    

    if (t == 1) 
    {
        inv = inv + (inv * 0.03);
        printf("O novo valor do investimento, após um mês, é: R$%.2f\n", inv);
    } 
    else if (t == 2) 
    {
        inv = inv + (inv * 0.04);
        printf("O novo valor do investimento, após um mês, é: R$%.2f\n", inv);
    } 
    
    return 0;
}
