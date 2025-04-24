#include <stdio.h>
#include <stdlib.h>

int main()
{
    int s;
    const int sv = 4321;
    printf("Digite a senha:");
    scanf("%d", &s);

    if (s == sv) {
        printf("Senha correta!\n");
        printf("Acesso liberado!\n");
    } else {
        printf("Senha incorreta!\n");
        printf("Acesso negado!\n");
    }

    return 0;
}
