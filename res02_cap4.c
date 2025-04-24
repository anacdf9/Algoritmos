#include <stdio.h>
#include <stdlib.h>
int main()

{
    float nota1, nota2, nota3, media, exame;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media= (nota1 + nota2 + nota3) / 3;

    
    if (media>= 0 && media < 3)
    {
        printf(" Você foi reprovado e sua nota é: %.2f", media);    
    }
    else if (media >=3 && media < 7)
    {
        printf("Você está de recuperação e sua nota é: %.2f", media);
        exame = 12 - media;
        printf("\n Você precisa tirar %.2f no exame", exame);
    }
    else if (media >= 7 && media <= 10)
    {
        printf(" Você foi aprovado e sua nota é: %.2f", media);
    }
 
    return 0;
}
