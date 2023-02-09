#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int parseDate(char *data, int *dia, int *mes, int *ano) {
    int d, m, y;
    if (strlen(data) != 10) {
        return -1;
    }
    if (sscanf(data, "%d/%d/%d", &d, &m, &y) != 3) {
        return -1;
    }
    *dia = d;
    *mes = m;
    *ano = y;
    return 0;
}

int main() {
    char date[11];
    int dia, mes, ano;

    printf("Digite a data no formato DD/MM/AAAA: ");
    scanf("%s", date);

    if (parseDate(date, &dia, &mes, &ano) == 0) {
        printf("Dia: %d\n", dia);
        printf("Mes: %d\n", mes);
        printf("Ano: %d\n", ano);
    } else {
        printf("Data inválida!\n");
    }

    return 0;
}
