#include <stdio.h>
#include <string.h>

void removeCaracter(char str[100], int posicao) {
    if (posicao < 0 || posicao >= strlen(str)) {
        printf("Posição inválida.\n");
        return;
    }
    for (int i = posicao; i < strlen(str) - 1; i++) {
        str[i] = str[i + 1];
    }
    str[strlen(str) - 1] = '\0';
}
int main() {
    char str[100] = "abacaxi";
    int posicao = 4;
    
    printf("String antes da remoção: %s.\n", str);
    removeCaracter(str, posicao);
    printf("String após a remoção do caracter na posição %d: %s.\n", posicao, str);
}
