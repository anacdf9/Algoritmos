#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int n1, n2, op;
printf("Digite o primeiro número:");
scanf("%d", &n1);
printf("Digite o segundo número:");
scanf("%d", &n2);

printf("Digite o numero referente a opção desejada: ");
printf("\n1 -  O primeiro número é elevado ao segundo número\n2 - Raiz quadrada de cada um dos números\n3 - Raiz cúbica de cada um dos números\n");
scanf("%d", &op);

if (op < 1 || op > 3) {
    printf("Opção inválida. Por favor, escolha uma opção entre 1 e 3.\n");
}

if (op == 1) 
{

    printf("O primeiro número, elevado ao segundo é: %.2f\n", pow(n1, n2));

} 
else if (op == 2) 
{
    printf("A raiz quadrada do primeiro número é: %.2f\n", sqrt(n1));
    printf("A raiz quadrada do segundo número é: %.2f\n", sqrt(n2));

} 
else if (op == 3) 
{
    printf("A raiz cúbica do primeiro número é: %.2f\n", cbrt(n1));
    printf("A raiz cúbica do segundo número é: %.2f\n", cbrt(n2));
}

    return 0;
}
