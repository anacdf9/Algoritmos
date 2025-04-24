#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float ang, dist;
    // 1 rad = 180/pi graus
    // 1 grau = pi/180 rad
const float pi = 3.14;
    // 1 rad = 180/pi graus
    // 1 grau = pi/180 rad
   // cos = ca/hip 
     printf("Digite o valor do ângulo em graus: ");
     scanf("%f", &ang);
      
     ang = (ang * pi) / 180; // converte para radianos
     printf("Digite o valor da medida da escada: ");
        scanf("%f", &dist);
    ang = cos(ang);

    printf("A medida do pé da escada até a parede é: %.2f\n", dist/ang);
// cos(ang) = dist / hip
    return 0;
}
