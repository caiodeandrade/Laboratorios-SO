#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define N 10  // Tamanho das matrizes

int A[N][N];
int B[N][N];
int C[N][N];

void *multiply(void *arg) {
    int *args = (int *)arg;
    int row = args[0];
    int col = args[1];

    C[row][col] = 0;
    for (int k = 0; k < N; k++) {
        C[row][col] += A[row][k] * B[k][col];
    }
    pthread_exit(NULL);
}
int main() {
    int valor = 1;
    
    // Inicialize as matrizes A e B com valores fictícios
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            A[i][j] = valor;
            B[i][j] = valor;
            valor++;
        }
    }
    pthread_t threads[N][N];

    // Crie as threads para calcular cada elemento de C
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            int *args = (int *)malloc(2 * sizeof(int));
            args[0] = i;
            args[1] = j;
            pthread_create(&threads[i][j], NULL, multiply, args);
        }
    }
    // Espere as threads terminarem
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            pthread_join(threads[i][j], NULL);
        }
    }
    // Imprima a matriz resultante C
    printf("Matriz Resultante C:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
