#include <stdio.h>
#include <string.h>

void encodeCesar(char mensagem[]) {
    int i;
    int comprimento = strlen(mensagem);

    for (i = 0; i < comprimento; i++) {
    //verifica se é uma letra minuscula
        if (mensagem[i] >= 'a' && mensagem[i] <= 'z') {
            mensagem[i] = ((mensagem[i] - 'a' + 3) % 26) + 'a';
        }
    //verifica se é uma letra maiuscula
        if (mensagem[i] >= 'A' && mensagem[i] <= 'Z') {
            mensagem[i] = ((mensagem[i] - 'A' + 3) % 26) + 'A';
        }
    }
}

int main() {
    char mensagem [100];

    printf("Digite a mensagem a ser codificada: ");
    scanf("%[^\n]s", mensagem);

    encodeCesar(mensagem);

    printf("Mensagem codificada: %s\n", mensagem);

    return 0;
}



