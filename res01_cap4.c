#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    float nota1, nota2, nota3, media;

    printf("Digite a nota do trabalho de laboratório (peso 2): ");
    scanf("%f", &nota1);
    nota1= nota1 * 2;

    printf("Digite a nota da avaliação semestral (peso 3): ");
    scanf("%f", &nota2);
    nota2= nota2 * 3;

    printf("Digite a nota do exame final (peso 5): ");
    scanf("%f", &nota3);
    nota3= nota3 * 5;

    media = (nota1 + nota2 + nota3) / 10;

    if (media>= 0 && media < 5)
    {
        printf(" A nota é: %.2f e o conceito é E", media);
    }
    else if (media>= 5 && media <6)
    {
        printf(" A nota é: %.2f e o conceito é D", media);
    }
    else if (media>=6 && media < 7)
    {
        printf(" A nota é: %.2f e o conceito é C", media);
    }
    else if (media>=7 && media < 8)
    {
        printf(" A nota é: %.2f e o conceito é B", media);
    }
    else if (media>=8 && media <= 10)
    {
        printf(" A nota é: %.2f e o conceito é A", media);
    }
    

    return 0;
}
