#include <stdio.h>
#include <string.h>
#include <ctype.h>

int verificaPalindromo(char mensagem[]) {
    int i, j;
    int tamanho = strlen(mensagem);

    for (i = 0, j = tamanho - 1; i < j; i++, j--) {
        //ignorar espaços e outros caracteres não alfabéticos
        while (!isalpha(mensagem[i]) && i < j) {
            i++;
        }
        while (!isalpha(mensagem[j]) && i < j) {
            j--;
        }

        //comparar letras ignorando diferenças entre maiúsculas e minúsculas
        if (tolower(mensagem[i]) != tolower(mensagem[j])) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char mensagem[100];

    printf("Digite a string: ");
    scanf("%[^\n]s", mensagem);

    if (verificaPalindromo(mensagem)) {
        printf("A string e um palindromo\n");
    } else {
        printf("A string nao e um palindromo\n");
    }

    return 0;
}
