#include  <stdio.h>
#include  <stdlib.h>

int main()
{
    float horas, bruto, minimo, ht, salario;
    minimo = 1518.00; // declarando a variavel minimo como float, e atribuindo o valor do salario minimo atual
    ht = minimo / 2; // a hora trabalhada (ht) é metade do salario minimo, ou seja, 1518.00 /2 = 759.00

    printf("Digite o número de horas trabalhadas: ");
    scanf("%f", &horas);
   
    bruto = horas * ht; // o salario bruto é o numero de horas trabalhadas multiplicado pelo valor da hora trabalhada (ht)

    salario = bruto - (bruto * 0.03); // o salario é o salario bruto menos 3% de desconto, ou seja, 0.03 * bruto

    printf("O salário a receber é: %.2f \n", salario); // imprime o salario a receber, ja com o desconto
    return 0;
}
