#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  
  // LEITURA DO ARQUIVO E SEPARAÇÃO EM 2 VETORES
  if (argc != 2) {
    fprintf(stderr, "Uso: %s <nome_do_arquivo>\n", argv[0]);
    return 1;
  }

  // Abrir o arquivo para leitura
  FILE *arquivo = fopen(argv[1], "r");
  if (arquivo == NULL) {
    perror("Erro ao abrir o arquivo");
    return 1;
  }

  int N;
  fscanf(arquivo, "%d", &N); // Ler o valor N da primeira linha

  int *vetor_direcao_0 = (int *)malloc(N * sizeof(int));
  int *vetor_direcao_1 = (int *)malloc(N * sizeof(int));

  if (vetor_direcao_0 == NULL || vetor_direcao_1 == NULL) {
    perror("Erro na alocação de memória");
    return 1;
  }
  
  int direcao, valor;
  int indice_0 = 0;
  int indice_1 = 0;

  // Ler e separar os valores das linhas em vetores
  for (int i = 0; i < N; i++) {
    fscanf(arquivo, "%d %d", &valor, &direcao);
    if (direcao == 0) {
      vetor_direcao_0[indice_0] = valor;
      indice_0++;
    } else if (direcao == 1) {
      vetor_direcao_1[indice_1] = valor;
      indice_1++;
    } else {
      printf("Valor inválido de direção na linha %d\n", i + 2);
    }    
  }

  // Fechar o arquivo
  fclose(arquivo);

  // LOGICA DA ESCADA DUPLA

  int n = 0; // numero de pessoas que já entraram na escada

  int ta = 1; // tempo atual
  int to = 0; // tempo até o qual a escada ficara ocupada

  int inicio_v0 = 0;
  int inicio_v1 = 0;

  int tam_v0 = indice_0; // numero de pessoas que querem ir esq -> dir
  int tam_v1 = indice_1; // numero de pessoas que querem ir dir -> esq

  int direcao_escada = 2;  // 2 = parada; 1 = dir -> esq; 0 = esq -> dir
  int fila = 0; // para controlar os valores de n em espera

  while(n < N) {
    // atualizando a direção da escada caso o ta seja igual ao to
    if(ta == to){
      direcao_escada = 2;
    }
    if(ta == vetor_direcao_0[inicio_v0] && (direcao_escada == 0 || direcao_escada == 2)) { // se elemento atual = ta(tempo atual) e a escada estiver na mesma direcao do vetor ou estiver parada
      if (direcao_escada == 0) {
        // incremento simples de to, n, e inicio_v0
        to = ta + 10;
        inicio_v0 ++;
        n ++;
      }
      if(direcao_escada == 2) {
        if (fila == 0) { // se a fila estiver vazia, incrementar 1 para não quebrar a lógica
          fila = 1;
        }
        // incremento de to, n, e inicio_v0 usando a fila como parâmetro
        to = ta + 10;
        direcao_escada = 0;
        inicio_v0 += fila;
        n += fila;
        fila = 0;
      }
    } else if(ta == vetor_direcao_0[inicio_v0] && direcao_escada == 1) { //se o elemento atual = ta(tempo atual) e a escada estiver na direcao oposta
      // verificação de concorrencia com a fila
      // se o proximo elemento de v0 for chegar em to, incrementamos 1 no tempo de chegada
      if(vetor_direcao_1[inicio_v1] == to) {
        vetor_direcao_1[inicio_v1] = to + 1;
      }
      fila = 0; // zerando a fila para recontar e modificar os elementos dela
      for (int i = inicio_v0; i < tam_v0; i++) {
        if(vetor_direcao_0[i] < to) {
          // atualiza o valor de chegada dos elementos em espera para to
          vetor_direcao_0[i] = to;
          // incremento na fila
          fila ++;
        }
      }
    }
    if(ta == vetor_direcao_1[inicio_v1] && (direcao_escada == 1 || direcao_escada == 2)) { // se o elemento atual = ta(tempo atual) e a escada estiver na mesma direcao do vetor ou estiver parada
      // incremento simples de to, n, e inicio_v1
      if (direcao_escada == 1) {
        to = ta + 10;
        inicio_v1 ++;
        n ++;
      }
      if(direcao_escada == 2) {
        if (fila == 0) { // se a fila estiver vazia, incrementar 1 para não quebrar a lógica
          fila = 1;
        }
        // incremento de to, n, e inicio_v1 usando a fila como parâmetro
        to = ta + 10;
        direcao_escada = 1;
        n += fila;
        inicio_v1 += fila;
        fila = 0;
      }
    } else if(ta == vetor_direcao_1[inicio_v1] && (direcao_escada == 0)) { // se o elemento atual for igual ao ta(tempo atual) e a escada estiver na direcao oposta
        // verificação de concorrencia com a fila
        // se o proximo elemento de v0 for chegar em to, incrementamos 1 no tempo de chegada
        if(vetor_direcao_0[inicio_v0] == to) {
          vetor_direcao_0[inicio_v0] = to + 1;
        }
        fila = 0; // zerando a fila para recontar e modificar os elementos dela
        for (int i = inicio_v1; i < tam_v1; i++) {
          if(vetor_direcao_1[i] < to){
            // atualiza o valor de chegada dos elementos em espera para to
            vetor_direcao_1[i] = to;
            // incremento na fila
            fila ++;
          }
        }
      }
    ta ++; // incremento do tempo atual
  }
  // EXIBINDO RESULTADO:
  printf("O tempo que a escada trasporta todas as pessoas é: %d. (Arquivo -> %s)\n", to, argv[1]);

  
  // Liberar memória alocada
  free(vetor_direcao_0);
  free(vetor_direcao_1);
  return 0;
}
