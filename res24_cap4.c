#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{
    float preco, valor_adicional = 0, imposto, preco_custo, desconto = 0, novo_preco;
    char tipo, refrigeracao;

    // Entrada de dados
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    printf("Digite o tipo do produto (A - alimentacao, L - limpeza, V - vestuario): ");
    scanf(" %c", &tipo);
    printf("Digite a refrigeracao do produto (S - refrigerado, N - nao refrigerado): ");
    scanf(" %c", &refrigeracao);

    // Converter letras para maiúsculas
    tipo = toupper(tipo);
    refrigeracao = toupper(refrigeracao);

    // Calcular valor adicional
    if (refrigeracao == 'N') {
        if (tipo == 'A') {
            valor_adicional = (preco < 15) ? 2.0 : 5.0;
        } else if (tipo == 'L') {
            valor_adicional = (preco < 10) ? 1.5 : 2.5;
        } else if (tipo == 'V') {
            valor_adicional = (preco < 30) ? 3.0 : 2.5;
        }
    } else if (refrigeracao == 'S') {
        if (tipo == 'A') {
            valor_adicional = 8.0;
        } else {
            valor_adicional = 0.0;
        }
    }

    // Calcular imposto
    if (preco < 25) {
        imposto = preco * 0.05;
    } else {
        imposto = preco * 0.08;
    }

    // Calcular preco de custo
    preco_custo = preco + imposto;

    // Calcular desconto
    if (tipo == 'A' && refrigeracao == 'S') {
        desconto = 0.0;
    } else {
        desconto = preco_custo * 0.03;
    }

    // Calcular novo preco
    novo_preco = preco_custo + valor_adicional - desconto;

    // Classificar o novo preco
    printf("\nResultados:\n");
    printf("Valor adicional: R$ %.2f\n", valor_adicional);
    printf("Imposto: R$ %.2f\n", imposto);
    printf("Preco de custo: R$ %.2f\n", preco_custo);
    printf("Desconto: R$ %.2f\n", desconto);
    printf("Novo preco: R$ %.2f\n", novo_preco);

    if (novo_preco <= 50) {
        printf("Classificacao: Barato\n");
    } else if (novo_preco > 50 && novo_preco < 100) {
        printf("Classificacao: Normal\n");
    } else {
        printf("Classificacao: Caro\n");
    }

    return 0;
}
