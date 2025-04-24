#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float quilo, quantidade, final;

    printf("Digite a quantidade de quilos da ração: "); // o cara compra em kg, entao primeiro precisa transformar
    scanf("%f", &quilo);
    quilo = quilo * 1000; // transformando quilos em gramas, pois a ração é dada em gramas

    printf("Digite a quantidade de ração que os gatos comem por dia: "); 
    scanf("%f", &quantidade); // são dois gatos, então multiplica quantidade por 2 logo após o scanf

    quantidade = quantidade * 2; // multiplicando por 2, pois são dois gatos

    final = quilo - (quantidade * 5); // a quantidade de ração que sobrou é a quantidade total menos a quantidade que os gatos comeram em 5 dias
    final = final / 1000; // transformando gramas em quilos, pois o resultado é em quilos
    printf(" Após 5 dias a quantidade de ração, em quilos, é: %.2f \n", final);

    return 0;
}
