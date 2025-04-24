#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2, n3, n4;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número (maior que o primeiro): ");
    scanf("%d", &n2);

    printf("Digite o terceiro número (maior que o segundo): ");
    scanf("%d", &n3);

    printf("Digite o quarto número: ");
    scanf("%d", &n4);

    printf("\nNúmeros em ordem decrescente:\n");


    if (n4 > n3) {
        printf("%d %d %d %d\n", n4, n3, n2, n1);
    }
    else if (n4 > n2) {
        printf("%d %d %d %d\n", n3, n4, n2, n1);
    }
    else if (n4 > n1) {
        printf("%d %d %d %d\n", n3, n2, n4, n1);
    }
    else {
        printf("%d %d %d %d\n", n3, n2, n1, n4);
    }

    return 0;
}
