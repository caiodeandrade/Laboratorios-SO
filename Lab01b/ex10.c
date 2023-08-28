#include <stdio.h>

void multiplicaLinha(int mat[3][3], int row, int linha, int num, int result[3][3]) {
    
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++){
            result[i][j] = mat[i][j];
        }
        
    }
    
    for(int i = 0; i< row; i++){
        result[linha][i] = mat[linha][i] * num; 
    }
}

void multiplicaColuna(int mat[3][3], int row, int coluna, int num, int result[3][3]) {
    for (int i = 0; i < row; i++) {
        for(int j = 0; j < row; j++){
            result[i][j] = mat[i][j];
        }
    }   
    
    for (int i = 0; i < row; i++) {
        result[i][coluna] = mat[i][coluna] * num; 
    }
}

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int matrizResultado1[3][3];
    multiplicaLinha(matriz, 3, 1, 2, matrizResultado1);

    int matrizResultado2[3][3];
    multiplicaColuna(matrizResultado1, 3, 2, 3, matrizResultado2);

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz após multiplicar linha 1 por 2:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizResultado1[i][j]);
        }
        printf("\n");
    }

    printf("Matriz após multiplicar coluna 2 por 3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizResultado2[i][j]);
        }
        printf("\n");
    }

    return 0;
}

