#include <stdio.h>
#include <stdlib.h>
int main()
{
    float altura, peso;

    printf("Digite o seu peso: ");
    scanf("%f", &peso);

    printf("Digite a sua altura: ");
    scanf("%f", &altura);

    if ( altura < 1.20 && peso < 60)
    {
        printf("Sua classificação é A. \n");
    }
        else if (altura < 1.20 && peso >= 60 && peso <= 90)
    {
        printf("Sua classificação é D. \n");
    }
    else if (altura < 1.20 && peso > 90)
    {
        printf("Sua classificação é G. \n");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso < 60)
    {
        printf("Sua classificação é B. \n");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso >= 60 && peso <= 90)
    {
        printf("Sua classificação é E. \n");
    }
    else if (altura >= 1.20 && altura <= 1.70 && peso > 90)
    {
        printf("Sua classificação é H. \n");
    }
    else if (altura > 1.70 && peso < 60)
    {
        printf("Sua classificação é C. \n");
    }
    else if (altura > 1.70 && peso >= 60 && peso <= 90)
    {
        printf("Sua classificação é F. \n");
    }
    else if (altura > 1.70 && peso > 90)
    {
        printf("Sua classificação é I. \n");
    }
    return 0;
}
