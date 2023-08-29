#include <stdio.h>

void somarLinhas(int matriz[][3], int c, int L1, int L2) {
    for (int i = 0; i < c; i++) {
        matriz[L2][i] = matriz[L1][i] + matriz[L2][i];
    }
}
void multiplicaLinhas(int matriz[][3], int c, int L1, int L2) {
    for (int i = 0; i < c; i++) {
        matriz[L2][i] = matriz[L1][i] * matriz[L2][i];
    }
}
void imprimeMatriz(int matriz[][3], int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i][j]); // Adicionando um espaço entre os elementos
        }
        printf("\n");
    }
}
int main() {
    int matriz[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Matriz original:\n");
    imprimeMatriz(matriz, 3, 3);
    printf("\n");

    somarLinhas(matriz, 3, 0, 1);
    printf("Matriz após somar linhas 1 e 2:\n");
    imprimeMatriz(matriz, 3, 3);
    printf("\n");
    
    multiplicaLinhas(matriz, 3, 0, 1);
    printf("Matriz após multiplicar linhas 1 e 2, depois delas serem somadas:\n");
    imprimeMatriz(matriz, 3, 3);

    return 0;
}
