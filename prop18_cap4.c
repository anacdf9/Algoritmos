#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    printf("Digite a sua idade:");
    scanf("%d", &s);

    if (s >= 18) {
        printf("Você É maior de idade!\n");
    } else {
        printf("Você É menor de idade!\n");
    }

    return 0;
}