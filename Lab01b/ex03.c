#include <stdio.h>
#include <stdlib.h>

// x = 0, y = impar +1 printar todos os elementos do vetor que são maiores que x e menores que y
// os que forem menores ou maiores, printar um espaço no lugar

int main() {
    int impar, inicio, fim;
    impar = 9;
    inicio = 0;
    fim = impar + 1;
    
    int *vetor = (int *)malloc(impar * sizeof(int));

    // Preencher o vetor com números de 1 até n
    for (int i = 0; i < impar; i++) {
        vetor[i] = i + 1;
    }
    
    while(inicio <= impar){
        for(int i = 0; i < impar; i++){
          if(vetor[i] > inicio && vetor[i] < fim){
            printf("%d ", vetor[i]);
          }
          else{
            printf("  ");
          }
        }
        inicio += 1;
        fim -=1;
        printf("\n");
    }

    return 0;
}
