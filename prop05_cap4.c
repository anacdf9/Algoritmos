#include <stdio.h>
#include <stdlib.h>

int main()
{

    int n1, n2, op;
    float media, divisao;
printf("Digite o primeiro número:");
scanf("%d", &n1);
printf("Digite o segundo número:");
scanf("%d", &n2);

printf("Digite o numero referente a opção desejada: ");
printf("\n1 - Média\n2 - Diferença do maior pelo menor\n3 - Produto\n4 - Divisão do primeiro pelo segundo\n");
scanf("%d", &op);
if (op < 1 || op > 4) {
    printf("Opção inválida. Por favor, escolha uma opção entre 1 e 4.\n");
}

if (op == 1) {

    media = (n1 + n2) / 2.0;
    printf("A média é: %.2f\n", media);

} else if (op == 2) 
{
    if (n1 > n2) {
        printf("A diferença do maior pelo menor é: %d\n", n1 - n2);
    } 
    else if (n2 > n1) 
    {
        printf("A diferença do maior pelo menor é: %d\n", n2 - n1);
    }
} 
else if (op == 3) 
{
    printf("O produto é: %d\n", n1 * n2);
} 
else if (op == 4) 
{

    if (n2 != 0) {
        divisao = (float)n1 / (float)n2;
        printf("A divisão do primeiro pelo segundo é: %.2f\n", divisao);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }
}

return 0;
}