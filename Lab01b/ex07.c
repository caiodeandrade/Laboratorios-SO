#include <stdio.h>

struct Pessoa {
    char nome[30];
    int idade;
    float peso;
    float altura;
};

int main() {
    struct Pessoa pessoas[3] = {
        {"pedro", 25, 70.5, 1.75},
        {"joao", 30, 65.2, 1.68},
        {"luis", 22, 80.0, 1.80}
    };

    printf("Dados das pessoas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Idade: %d\n", pessoas[i].idade);
        printf("Peso: %.2f\n", pessoas[i].peso);
        printf("Altura: %.2f\n", pessoas[i].altura);
        printf("\n");
    }

    return 0;
}

