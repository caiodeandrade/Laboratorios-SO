#include <stdio.h>
#include <string.h>

int main() {
    char nome1[] = "Ziraldo";
    char nome2[] = "Ana";

    printf("Primeiro nome inserido: Ziraldo\n");

    printf("Segundo nome inserido: Ana\n");

    int comparison = strcmp(nome1, nome2);

    if (comparison <= 0){
        printf("Nomes em ordem alfabética: %s, %s\n", nome1, nome2);
    }
    else{
        printf("Nomes em ordem alfabética: %s, %s\n", nome2, nome1);
    }
    return 0;
}
