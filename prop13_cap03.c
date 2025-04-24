#include <stdio.h>
#include <stdlib.h>

int main()
{
   int numero;

   printf("Digite um número: ");
    scanf("%d", &numero);

    printf(" A tabuada desse número é:\n");
    // printf(" %d x 1 = %d\n", numero, numero * 1); 
    // printf(" %d x 2 = %d\n", numero, numero * 2);
    // printf(" %d x 3 = %d\n", numero, numero * 3);
    // printf(" %d x 4 = %d\n", numero, numero * 4);
    // printf(" %d x 5 = %d\n", numero, numero * 5);
    // printf(" %d x 6 = %d\n", numero, numero * 6);
    // printf(" %d x 7 = %d\n", numero, numero * 7);
    // printf(" %d x 8 = %d\n", numero, numero * 8);
    // printf(" %d x 9 = %d\n", numero, numero * 9);
    // printf(" %d x 10 = %d\n", numero, numero * 10);

    //laço de repetição 
    for (int i = 0; i <= 10; i++)
    {
        printf(" %d x %d = %d\n", numero, i, numero * i); 
    }
    

    return 0;
}
