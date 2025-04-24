#include  <stdio.h>
#include  <stdlib.h>
#include <math.h>
//usar o teorema de pitágoras a² = b² + c²
// a = altura do quadro, b = distancia da escada da parede, c = tamanho da escada
int main()
{
    int t_escada, h_quadro, dist_escada;

    printf("Digite o tamanho da escada:\n ");
    scanf("%d", &t_escada);

    printf("Digite a altura em que deseja colocar o quadro:\n ");
    scanf("%d", &h_quadro);

        if (h_quadro > t_escada) // se a altura do quadro for maior que o tamanho da escada
        {
            printf("A altura do quadro não pode ser maior que o tamanho da escada.\n");
            return 1; // encerra o programa com erro
        }
        else if (h_quadro < 0 || t_escada < 0) // se a altura do quadro ou o tamanho da escada forem negativos
        {
            printf("A altura do quadro e o tamanho da escada devem ser positivos.\n");
            return 1; // encerra o programa com erro
        }
        
       dist_escada = sqrt(pow(t_escada, 2) - pow(h_quadro, 2)); // 

    printf(" A distância que a escada deve estar da parede é:%d\n ", dist_escada);

    return 0;
}
