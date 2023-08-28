#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    float n1, n2, n3, me, ma;
    char nota;

    // Leitura das notas e da média dos exercícios
    printf("Exemplo 1:\n");
    n1 = ((float)rand() / RAND_MAX) * 10.0;
    printf("N1: %.2f", n1);
    n2 = ((float)rand() / RAND_MAX) * 10.0;
    printf("\nN2: %.2f", n2);
    n3 = ((float)rand() / RAND_MAX) * 10.0;
    printf("\nN3: %.2f", n3);
    me = ((float)rand() / RAND_MAX) * 10.0;
    printf("\nMédia Exercícios: %.2f", me);

    // Cálculo da média de aproveitamento
    ma = (n1 + n2 * 2 + n3 * 3 + me) / 7;

    // ifs do aproveitamento
    if (ma >= 9.0) {
        nota = 'A';
    } else if (ma >= 7.5) {
        nota = 'B';
    } else if (ma >= 6.0) {
        nota = 'C';
    } else if (ma >= 4.0) {
        nota = 'D';
    } else {
        nota = 'E';
    }

    // Exibição do resultado
    printf("\nMédia de Aproveitamento: %.2f\n", ma);
    printf("Aproveitamento: %c\n", nota);

    return 0;
}
