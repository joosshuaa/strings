#include <stdio.h>
#include <string.h>

// função para ler uma string
void lerString(char s1[], int size) {
    printf("Digite uma string S1 (tamanho maximo 20 caracteres): ");
    fgets(s1, size, stdin);
    int len = strlen(s1);
    if (s1[len - 1] == '\n') {
        s1[len - 1] = '\0';
    }
}

// função para imprimir o tamanho da string
void imprimirTamanhostring(char s1[]) {
    printf("Tamanho da string S1: %lu\n", strlen(s1));
}

// função para comparar a string S1 com a string S2
void compararString(char s1[], char s2[]) {
    int result = strcmp(s1, s2);
    if (result == 0) {
        printf("As strings S1 e S2 sao iguais.\n");
    } else if (result < 0) {
        printf("A string S1 e menor que a string S2.\n");
    } else {
        printf("A string S1 e maior que a string S2.\n");
    }
}

// função para concatenar a string S1 com a string S2
void concatenarStrings(char s1[], char s2[]) {
    strcat(s1, s2);
    printf("Resultado da concatenacao: %s\n", s1);
}

// função para imprimir a string S1 de forma reversa
void stringReversa(char s1[]) {
    printf("String S1 invertida: ");
    for (int i = strlen(s1) - 1; i >= 0; i--) {
        printf("%c", s1[i]);
    }
    printf("\n");
}

// função para contar quantas vezes um dado caractere aparece na string S1
void contarCharacter(char s1[]) {
    char c;
    int count = 0;
    printf("Digite o caractere a ser contado: ");
    scanf(" %c", &c);
    for (int i = 0; i < strlen(s1); i++) {
        if (s1[i] == c) {
            count++;
        }
    }
    printf("O caractere %c aparece %d vez(es) na string S1.\n", c, count);
}

// função para substituir a primeira ocorrência do caractere C1 da string S1 pelo caractere C2
void substituirCharacter(char s1[]) {
    char c1, c2;
    printf("Digite o caractere a ser substituido: ");
    scanf(" %c", &c1);
    printf("Digite o caractere substituto: ");
    scanf(" %c", &c2);
    int i;
    for (i = 0; s1[i] != '\0'; i++) {
        if (s1[i] == c1) {
            s1[i] = c2;
            break;
        }
    }
}

// função para contar a quantidade de vezes que o caractere C aparece na string S
int repeticaoCharacter(char s[], char c) {
    int count = 0;
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            count++;
        }
    }
    return count;
}

// função para retornar a posição da primeira ocorrência do caractere C na string S
int firstOcurrence(char s[], char c) {
    int i;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            return i;
        }
    }
    return -1;
}

// função para retornar a posição da última ocorrência do caractere C na string S
int lastOcurrence(char s[], char c) {
    int i;
    int lastIndex = -1;
    for (i = 0; s[i] != '\0'; i++) {
        if (s[i] == c) {
            lastIndex = i;
        }
    }
    return lastIndex;
}

int main() {
    char s1[100];
    printf("Digite a string: ");
    scanf("%s", s1);

    char c;
    printf("Digite o caractere: ");
    scanf(" %c", &c);

    int count = repeticaoCharacter(s1, c);
    printf("Quantidade de vezes que o caractere aparece na string: %d\n", count);

    int firstIndex = firstOcurrence(s1, c);
    if (firstIndex == -1) {
        printf("Caractere nao encontrado na string\n");
    } else {
        printf("Posicao da primeira ocorrencia do caractere na string: %d\n", firstIndex);
    }

    int lastIndex = lastOcurrence(s1, c);
    if (lastIndex == -1) {
        printf("Caractere nao encontrado na string\n");
    } else {
        printf("Posicao da ultima ocorrencia do caractere na string: %d\n", lastIndex);
    }

    substituirCharacter(s1);
    printf("String apos a substituicao: %s\n", s1);

    return 0;
}


