#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 4

int main() {
    int matriz[tamanho][tamanho];

    // Preenche a matriz com números aleatórios entre 0 e 100
    srand(time(NULL));
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            matriz[i][j] = rand() % 101;
        }
    }

    printf("Matriz gerada:\n");
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Assumimos que o primeiro valor é o primeiro, e que ele está na primeira linha
    int linha_menor = 0;
    int menor = matriz[0][0];

  // percorremos a matriz em busca do menor valor e de sua linha
    for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            if (matriz[i][j] < menor) {
                menor = matriz[i][j];
                linha_menor = i;
            }
        }
    }

    printf("A linha com o menor número é a linha %d.\n", linha_menor + 1);

    return 0;
}
