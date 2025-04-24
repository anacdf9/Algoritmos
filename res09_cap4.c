#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    time_t agora;
    struct tm *data_hora;

    // Pega a data e hora atual do sistema
    time(&agora);
    data_hora = localtime(&agora);

    int dia = data_hora->tm_mday;
    int mes = data_hora->tm_mon + 1; // tm_mon vai de 0 a 11
    int ano = data_hora->tm_year + 1900;
    int hora = data_hora->tm_hour;
    int minuto = data_hora->tm_min;

    // Imprime data no formato DD/MM/AAAA
    printf("Data: %02d/%02d/%04d\n", dia, mes, ano);

    // Imprime data com mês por extenso
    printf("Data por extenso: %02d de ", dia);

    if (mes == 1) {
        printf("janeiro");
    } else if (mes == 2) {
        printf("fevereiro");
    } else if (mes == 3) {
        printf("março");
    } else if (mes == 4) {
        printf("abril");
    } else if (mes == 5) {
        printf("maio");
    } else if (mes == 6) {
        printf("junho");
    } else if (mes == 7) {
        printf("julho");
    } else if (mes == 8) {
        printf("agosto");
    } else if (mes == 9) {
        printf("setembro");
    } else if (mes == 10) {
        printf("outubro");
    } else if (mes == 11) {
        printf("novembro");
    } else if (mes == 12) {
        printf("dezembro");
    }

    printf(" de %04d\n", ano);

    // Imprime hora e minuto
    printf("Hora: %02d:%02d\n", hora, minuto);
    return 0;
}
