#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// numero de threads do programa
int thread_count;
int transaction_count;
int success;

//Declarando o mutex
pthread_mutex_t mutex;

// type struct conta c que armazena o saldo
struct c {
  int saldo;
};
typedef struct c conta;

// variávies globais do tipo conta from e to
conta from, to;

// valor que será transferido nas iterações
int valor;

//Declarando a função que será utilizada nas threads
void *transferencia(void *rank);

int main(int argc, char* argv[]) {
  if (argc != 2) {
    fprintf(stderr, "Erro: argumentos inválidos! Modo de uso: ./Projeto01.bin <numero de threads>\n");
    return 1;
  }
  
  long thread;
  pthread_t *thread_handles;

  //setando o valor das transferências como 10
  valor = 2;

  // declarando o número de threads
  thread_count = strtol(argv[1], NULL, 10);
  thread_handles = malloc(thread_count * sizeof(pthread_t));
  pthread_mutex_init(&mutex, NULL); // Inicializa o mutex
  
  //declarando o saldo inicial de to e from
  from.saldo = 100;
  to.saldo = 100;

  //print do saldo inicial
  printf("Saldo inicial de 'from': %d\n", from.saldo);
  printf("Saldo inicial de 'to': %d\n\n", to.saldo);

  // while para garantir 
  while(from.saldo != 0) {
    for (thread = 0; thread < thread_count; thread++) {
      pthread_create(&thread_handles[thread], NULL, transferencia, (void*) thread);
    }
    for (thread = 0; thread < thread_count; thread++) {
      pthread_join(thread_handles[thread], NULL);
    }
  }
  pthread_mutex_destroy(&mutex); // Destroi o mutex
  free(thread_handles);
  
  printf("\nTotal de transações: %d", transaction_count);
  printf("\nTotal de transações bem sucedidas: %d", success);
  printf("\nSaldo final de 'from': %d\n", from.saldo);
  printf("Saldo final de 'to': %d\n", to.saldo);  
  return 0;
}
void *transferencia(void *rank) {
  long my_rank = (long)rank;

  // Seed para gerar números aleatórios diferentes em cada thread
  unsigned int seed = (unsigned int)my_rank;

  // Gerar um número aleatório sendo ele 0 ou 1
  int numero_aleatorio = rand_r(&seed) % 10;
  
  pthread_mutex_lock(&mutex); // Dar lock no mutex
  printf("Thread %ld está em execução\n", my_rank);

  if (numero_aleatorio <= 3) {
    if (from.saldo == 0) {
      printf("Saldo From já foi zerado\n\n");
    } else if (to.saldo < valor) {
      printf("Saldo To insuficiente para a realização da transferência\n\n");
    } else {
      transaction_count ++;
      to.saldo -= valor;
      from.saldo += valor;
      printf("Transferência ToFrom realizada\n");
      printf("Saldo from: %d, saldo to: %d\n\n", from.saldo, to.saldo);
    }
  } else {
    if (from.saldo == 0) {
      printf("Saldo From já foi zerado\n\n");
    } else if (from.saldo < valor) {
      printf("Saldo From insuficiente para a realização da transferência\n\n");
    } else {
      success ++;
      transaction_count ++;
      from.saldo -= valor;
      to.saldo += valor;
      printf("Transferência FromTo realizada\n");
      printf("Saldo from: %d, saldo to: %d\n\n", from.saldo, to.saldo);
    }
  }
  pthread_mutex_unlock(&mutex); // Dar unlock no mutex  
  return NULL;
}
