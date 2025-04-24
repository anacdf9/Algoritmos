#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;

    printf("Digite o primeiro número: ");
    scanf("%d", &n1);

    printf("Digite o segundo número: ");
    scanf("%d", &n2);

    if (n1 > n2)
    {
        printf(" O maior número é: %d", n1);
    }
    else 
    {
        printf(" O maior número é: %d", n2);
    }
   
    return 0;
}
