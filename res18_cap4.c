#include <stdio.h>
#include <stdlib.h>
int main()
{
    int l1, l2, l3;

    printf("Digite o valor do lado 1: ");
    scanf("%d", &l1);

    printf("Digite o valor do lado 2: ");
    scanf("%d", &l2);

    printf("Digite o valor do lado 3: ");
    scanf("%d", &l3);

    if ( l1 < l2+l3 && l2 < l1+l3 && l3 < l1+l2)
    {
        printf("Os lados formam um triângulo. \n");
    }
    else
    {
        printf("Os lados não formam um triângulo. \n");
    }
    if (l1 == l2 && l2 == l3)
    {
        printf("O triângulo é equilátero. \n");
    }
    else if (l1 == l2 && l1 != l3 && l1 == l3 && l1 != l2 && l2 == l3 && l2 != l1)
    {
        printf("O triângulo é isósceles. \n");
    }
    else if (l1 != l2 && l1 != l3 && l2 != l3)
    {
        printf("O triângulo é escaleno. \n");
    }

    return 0;
}
