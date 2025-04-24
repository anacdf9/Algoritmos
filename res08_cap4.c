#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n, n1, n2;

    printf( "MENU DE OPÇÕES\n"
            "1 - Somar os dois números\n"
            "2 - Raiz quadrada de um número\n"
            "Digite a opção desejada: ");
        scanf("%d", &n);

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n == 1)
    {
        printf("A soma dos números é: %d\n", n1 + n2);
    }
    else if (n == 2)
    {
        if (n1 >= 0)
        {
            printf("A raiz quadrada de %d é: %.2f\n", n1, sqrt(n1));
            if (n2 >= 0)
            {
                printf("A raiz quadrada de %d é: %.2f\n", n2, sqrt(n2));
            }
            else
            {
                printf("Não é possível calcular a raiz quadrada de um número negativo: %d\n", n2);
            }
        }
    return 0;
}
}
