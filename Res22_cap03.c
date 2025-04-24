#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float salario, quilowatt;

    printf("Digite o valor do salario: ");
    scanf("%f", &salario);

    salario = salario / 5; // usando o valor de salario para definir o valor do quilowatt, dividindo por 5 salario 1/5 = divido por 5 né
                            // aqui eu so economizei uma variavel, to usando a salario mesmo pra não criar outra, não tem problema pq n vai usar dnv
    printf("Digite a quantidade de quilowatt consumidos: ");
    scanf("%f", &quilowatt);

    printf("O valor de cada quilowatt, de acordo com salario é R$ %.2f\n", salario); // aqui eu to imprimindo o valor do salario dividido por 5, que é o valor do quilowatt

    printf("O valor a ser pago é R$ %.2f\n", salario * quilowatt); // aqui eu to imprimindo o valor do quilowatt, multiplicado pela quantidade de quilowatt consumidos = valor a ser pago pelo consumo

    printf("O valor a ser pago, com desconto, é R$ %.2f\n", (salario * quilowatt) * 0.85); // aqui eu to imprimindo o valor do quilowatt, multiplicado pela quantidade de quilowatt consumidos, com desconto de 15%

    return 0;
}

