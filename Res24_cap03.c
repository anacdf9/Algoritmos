#include  <stdio.h>
#include  <stdlib.h>
#include  <math.h>

int main()
{
    float hora, armz;
    

    printf("Digite a hora (Em formato decimal, por exemplo: 4.30 - quatro e meia): ");
    scanf("%f", &hora);

    armz = hora - 0.5;  // to armazenando aqui a hora inteira
    armz = roundf(armz);
    armz = armz * 60; // agora pegando a hora inteira e mutiplicando, achando os minutos
                    // o intuito de usar a variavel armz é deixar a variavel hora intacta, pq ainda eu quero saber os outros decimais q sobraram
    while (hora > 1) {
        hora = hora - 1;  // isso é um laço de repetição simples. Em vez de usar if, ele tem a condição.
}                         // WHILE x acontece, faça isso.  Enquanto hora for maior que 1, subtraia 1 de hora. Entendeu?

    hora = hora * 100; // aqui eu to pegando a hora e multiplicando por 100, pq o decimal tem q somar como minutos

    armz = armz + hora;  // somando a hora com os minutos


printf("A hora digitada, em minutos, é: %.0f \n", armz); // aqui eu to imprimindo a hora com 0 casas decimais



    return 0;
}
