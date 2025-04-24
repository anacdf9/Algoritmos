#include <stdio.h>
#include <stdlib.h>

int main()
{

    int c, q;
    float prec, t, desc;
    printf("Digite o código do produto comprado (1 a 40):");
    scanf("%d", &c);
    printf("Digite a quantidade comprada:");
    scanf("%d", &q);

    if (c >= 1 && c <= 10) {
        prec = 10.00;
    } 
    else if (c >= 11 && c <= 20) {
        prec = 15.00;
    } 
    else if (c >= 21 && c <= 30) {
        prec = 20.00;
    } 
    else if (c >= 31 && c <= 40) {
        prec = 30.00;
    } 

    printf("O preço unitário do produto é R$%.2f\n", prec);
    t = prec * q;
    if (t < 250) {
        printf("O preço total a pagar, sem desconto, é R$%.2f\n", t);
        desc = t * 0.05;
        printf("O desconto a ser aplicado é R$%.2f\n", desc);
        t = t - desc;
        printf("O preço total a pagar, com desconto, é R$%.2f\n", t);
        
    } 
    else if (t >= 250 && t <= 500) {
        printf("O preço total a pagar, sem desconto, é R$%.2f\n", t);
        desc = t * 0.10;
        printf("O desconto a ser aplicado é R$%.2f\n", desc);
        t = t - desc;
        printf("O preço total a pagar, com desconto, é R$%.2f\n", t);
        
    } 
    else if (t > 500) {
        printf("O preço total a pagar, sem desconto, é R$%.2f\n", t);
        desc = t * 0.15;
        printf("O desconto a ser aplicado é R$%.2f\n", desc);
        t = t - desc;
        printf("O preço total a pagar, com desconto, é R$%.2f\n", t);
    }
    
    return 0;
}
