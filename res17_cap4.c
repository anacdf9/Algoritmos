#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;

    printf("Digite o valor de a: ");
    scanf("%d", &a);

    printf("Digite o valor de b: ");
    scanf("%d", &b);

    printf("Digite o valor de c: ");
    scanf("%d", &c);

    //ax² + bx + c = 0
    // Fórmula de Bhaskara: x = (-b ± √(b² - 4ac)) / (2a)

    float delta = b * b - 4 * a * c;
    float x1, x2;

    if (delta < 0)
    {
        printf("A equação não possui raízes reais.\n");
    }
    else if (delta == 0)
    {
        x1 = -b / (2 * a);
        printf("A equação possui uma raiz real: x = %.2f\n", x1);
    }
    else
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        printf("A equação possui duas raízes reais: x1 = %.2f e x2 = %.2f\n", x1, x2);
    }
    return 0;
}
