#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a;
    char sexo;
    printf("Digite a sua altura:\n");
    scanf("%f", &a);
    printf("Digite seu sexo (m/f):\n");
    scanf(" %c", &sexo);    

    if (sexo == 'm') {
        printf("Seu peso ideal é: %.2f kg\n", (72.7 * a) - 58);
    } else if (sexo == 'f') {
        printf("Seu peso ideal é: %.2f kg\n", (62.1 * a) - 44.7);
    }

    return 0;
}
