#include <stdio.h>
#include <stdlib.h>

int main()
{
    int h1, m1, h2, m2, duracao;;

    printf("Digite a primeira hora (hh): ");
    scanf("%d", &h1);

    printf("Digite os minutos (mm): ");
    scanf("%d", &m1);

    printf("Digite a segunda hora (hh): ");
    scanf("%d", &h2);

    printf("Digite os minutos (mm): ");
    scanf("%d", &m2);

    duracao = ((h2 * 60) + m2) - ((h1 * 60) + m1);

    if (duracao < 0)
    {
        duracao = duracao + (24 * 60); 
        printf( "O jogo durou %d horas e %d minutos", duracao / 60, duracao % 60);
    }
    else
    {
        printf( "O jogo durou %d horas e %d minutos", duracao / 60, duracao % 60);
    }
    return 0;
}
