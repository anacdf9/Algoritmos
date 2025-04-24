#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1, n2;
    float media;

    printf("Digite a primeira nota:");
    scanf("%d", &n1);   

    printf("Digite a segunda nota:");
    scanf("%d", &n2);     

    media = (n1 + n2) / 2.0;
    printf("A média das notas é: %.2f\n", media);
    if (media >= 0 && media < 3)
    {
        printf("O aluno foi reprovado!\n"); 
    }
        
    else if (media >=3 && media < 7)
    {
        printf("O aluno está de recuperação.\n");
    } 
    
    else if (media >= 7 && media <= 10) 
    {
        printf("O aluno foi aprovado!\n");
    }

    return 0;
}