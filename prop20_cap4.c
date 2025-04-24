#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    int i;
    printf("Digite a idade do nadador:");
    scanf("%d", &i);

    if (i < 5) {
        printf("Nadador muito novo! Sem categoria.\n");
    } 
    else if (i >= 5 && i <= 7) {
        printf("Nadador infantil\n");
    } 
    else if (i >= 8 && i <= 10) {
        printf("Nadador juvenil\n");
    } 
    else if (i >= 11 && i <= 15) {
        printf("Nadador adolescente\n");
    } 
    else if (i >= 16 && i <= 30) {
        printf("Nadador adulto\n");
    } 
    else if (i > 30)
     {
        printf("Nadador sênior\n");
    }
   

    return 0;
}