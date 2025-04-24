#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n1;
    float A, B, C;

    printf("Digite o número (1, 2 ou 3): ");
    scanf("%d", &n1);

    printf("Digite o valor de A: ");
    scanf("%f", &A);

    printf("Digite o valor de B: ");
    scanf("%f", &B);

    printf("Digite o valor de C: ");
    scanf("%f", &C);

    if ( n1 == 1)
    {
        if (A> B && A >C)
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", B, C, A);
        }
        else if (B > A && B > C)
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", A, C, B);
        }
        else
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", A, B, C);
        }
    }
    else if ( n1 == 2)
    {
        if (A < B && A < C && B < C)
        {
            printf(" Os números em ordem decrescente são: %.2f, %.2f, %.2f\n", C, B, A);
        }
        else if (B < A && B < C && A < C)
        {
            printf(" Os números em ordem decrescente são: %.2f, %.2f, %.2f\n", C, A, B);
        }
        else if (C < A && C < B && A < B)
        {
            printf(" Os números em ordem decrescente são: %.2f, %.2f, %.2f\n", C, A, B);
        }
        else if (C < A && C < B)
        {
            printf(" Os números em ordem decrescente são: %.2f, %.2f, %.2f\n", A, B, C);
        }
    }
    else if ( n1 == 3)
    {
       if ( A> B && A>C)
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", B, A, C);
        }
        else if (B > A && B > C)
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", A, B, C);
        }
        else
        {
            printf(" Os números em ordem crescente são: %.2f, %.2f, %.2f\n", A, C, B);
        }
    }
    return 0;
}
