#include <stdio.h>
#include <math.h>

void moduloNegativo(int mat[3][3], int row, int col, int result[3][3]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[i][j] = mat[i][j];
            if (mat[i][j] < 0) {
                result[i][j] = fabs(mat[i][j]);
            }
            
        }
    }
}

int main() {
    int matriz[3][3] = {
        {-5, 10, -3},
        {7, -8, 4},
        {2, -6, 9}
    };

    int matrizResultado[3][3];

    moduloNegativo(matriz, 3, 3, matrizResultado);

    printf("Matriz original:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    printf("Matriz com módulos:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrizResultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}

