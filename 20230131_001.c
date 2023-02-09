#include <stdio.h>
#include <string.h>
#include <ctype.h>

void reverseString(char* str){
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

void removeVowels(char* str){
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

void toUppercase(char* str){
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        str[i] = toupper(str[i]);
    }
}

int countCharacter(char* str, char c){
    int count = 0;
    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        if (str[i] == c) {
            count++;
        }
    }
    return count;
}

void removeCharacter(char* str, char c){
    int n = strlen(str);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] != c) {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';
}

int main(){
    char str[100];
    printf("Digite uma string: ");
    scanf("%[^\n]s", str);
    printf("\nString original: %s\n", str);
    reverseString(str);
    printf("String invertida: %s\n", str);
    removeVowels(str);
    printf("String sem vogais: %s\n", str);
    toUppercase(str);
    printf("String em maiusculo: %s\n", str);
    char c;
    printf("Digite um caractere para contar: ");
    scanf(" %c", &c);
    int count = countCharacter(str, c);
    printf("O caractere %c aparece %d vezes na string\n", c, count);
    printf("Digite um caractere para apagar: ");
    scanf(" %c", &c);
    removeCharacter(str, c);
    printf("String sem o caractere %c: %s\n", c, str);
    return 0;
}
