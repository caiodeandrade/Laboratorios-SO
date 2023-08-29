#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5

void print_matrix(int matriz[tamanho][tamanho]) {
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplica_linha(int matriz[tamanho][tamanho], int linha, int multiplicador) {
    for (int j = 0; j < tamanho; j++) {
        matriz[linha][j] *= multiplicador;
    }
}

void multiplica_coluna(int matriz[tamanho][tamanho], int coluna, int multiplicador) {
    for (int i = 0; i < tamanho; i++) {
        matriz[i][coluna] *= multiplicador;
    }
}

int main() {
  //declaração da matriz
    int matriz[tamanho][tamanho];

    srand(time(NULL));

    // Preenche a matriz com números aleatórios entre 0 e 2
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 3;
        }
    }

    printf("Matriz gerada:\n");
    print_matrix(matriz);
    
    printf("\nMultiplicando a linha 3 e a coluna 3 por 2:\n");
    multiplica_linha(matriz, 2, 2);
    multiplica_coluna(matriz, 2, 2);
  
    printf("Matriz resultante:\n");
    print_matrix(matriz);
  
    return 0;
}
