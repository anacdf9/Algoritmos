#include <stdio.h>
#include <stdlib.h>
int main()
{
    int d1,m1,a1,d2,m2,a2;

    printf("Digite o dia: ");
    scanf("%d",&d1);

    printf("Digite o mes: ");
    scanf("%d",&m1);

    printf("Digite o ano: ");
    scanf("%d",&a1);


    printf("Digite o segundo dia: ");
    scanf("%d",&d2);

    printf("Digite o segundo mes: ");
    scanf("%d",&m2);

    printf("Digite o segundo ano: ");
    scanf("%d",&a2);

    if (a1 > a2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", d1, m1, a1, d2, m2, a2);
    }
    else if ( m1 > m2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", d1, m1, a1, d2, m2, a2);
    }
    else if ( d1 > d2)
    {
        printf("A data %d/%d/%d é cronologicamente maior que %d/%d/%d", d1, m1, a1, d2, m2, a2);
    }
    else if (a1 == a2 && m1 == m2 && d1 == d2)
    {
        printf("As datas são iguais");
    }
   
    return 0;
}
