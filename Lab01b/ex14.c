#include <stdio.h>
#include <string.h>

void insereCaracter(char str[100], int posicao, char c) {
    if (posicao < 0 || posicao > strlen(str)) {
        printf("Posição inválida.\n");
        return;
    }
    for (int i = strlen(str); i >= posicao; i--) {
        str[i + 1] = str[i];
    }
    str[posicao] = c; 
}
int main() {
    char str[100] = "GOT"; 
    int posicao = 2;
    char caractere = 'A';
    
    printf("String antes da inserção: %s.\n", str);
    insereCaracter(str, posicao, caractere);
    printf("String após a inserção do caractere '%c' na posição %d: %s.\n", caractere, posicao, str);

    return 0;
}
