#include <stdio.h>
#include <stdlib.h>

int main()
{
  float d1, d2;
  
  printf("Digite o valor da diagonal maior: ");
    scanf("%f", &d1);

    printf("Digite o valor da diagonal menor: ");   
    scanf("%f", &d2);

    printf("A área do losango é: %.2f\n", (d1 * d2) / 2);
    
    return 0;
}
