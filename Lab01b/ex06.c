#include <stdio.h>

void transposeMatrix(int mat[][3], int row, int col, int result[][3]) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int main() {
    int row = 3;
    int col = 3;

    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int transposedMatrix[3][3];

    transposeMatrix(matrix, row, col, transposedMatrix);

    printf("Matriz original:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Matriz transposta:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transposedMatrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

