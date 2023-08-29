#include <stdio.h>

int encontrarPosicao(char c, char *string) {
    int posicao = -1;

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == c) {
            posicao = i + 1;
            break;
        }
    }
    return posicao;
}
int main() {
    int posicao = encontrarPosicao('a', "tomate");
    if (posicao != -1) {
        printf("O caractere 'a' é a %d° lestra (Posição %d da string) da palavra 'tomate'.\n", posicao, posicao - 1);
    } else {
        printf("O caractere não foi encontrado na string.\n");
    }
    return 0;
}
