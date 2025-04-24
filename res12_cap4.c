#include <stdio.h>
#include <stdlib.h>

int main()
{
    float codigo, salario;

    printf (" Digite o código correspondente ao cargo do funcionário: \n"
    " 1 -   Escrituário \n" \
    " 2 - Secretário \n" \
    " 3 - Caixa \n" \
    " 4 - Gerente \n" \
    " 5 - Diretor \n");
    scanf("%f", &codigo);

    printf (" Digite o salário do funcionário: ");
    scanf ("%f", &salario);

    if (codigo ==1)
    {
        salario = salario + ( salario * 0.50 );
        printf (" O novo salário do funcionário é: %.2f", salario);

    }
    else if (codigo == 2)
    {
        salario = salario + ( salario * 0.35 );
        printf (" O novo salário do funcionário é: %.2f", salario);
    }
    else if (codigo == 3)
    {
        salario = salario + ( salario * 0.20 );
        printf (" O novo salário do funcionário é: %.2f", salario);
    }
    else if (codigo == 4)
    {
        salario = salario + ( salario * 0.10 );
        printf (" O novo salário do funcionário é: %.2f", salario);
    }
    else if (codigo == 5)
    {
        printf (" O salário do funcionário não há aumento: %.2f", salario);
    }
    else
    {
        printf (" Código inválido! ");
    }



    return 0;
}
