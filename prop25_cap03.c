#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
   float hora;
    int inteiro;

   printf("Digite a hora, 4.3 = 4:30 : ");
    scanf("%f", &hora);

    inteiro = ceil(hora) - 0.5;   // arredonda para cima

    while (hora > 1) 
    {
       hora = hora - 1;
       //printf("%.2f\n", hora); //debug
    }
    hora = hora * 100; //transforma decimais em minutos
       

    printf("A hora digitada em minutos é: %.0f\n", inteiro * 60.0);
    printf("O total dos minutos, mais as horas digitadas é: %.0f\n", hora + ( inteiro * 60));
    printf(" O total de minutos convertidos em segundos é: %.0f\n", hora * 60.0);
   return 0;
}
