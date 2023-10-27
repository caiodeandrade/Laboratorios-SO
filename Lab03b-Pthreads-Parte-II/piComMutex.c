#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define interacoes 1000000 

int thread_count;
long long n = interacoes; 
double sum = 0.0;
pthread_mutex_t mutex;

void* Thread_sum(void* rank) {
    long my_rank = (long) rank;
    double factor;
    long long i;
    long long my_n = n / thread_count;
    long long my_first_i = my_n * my_rank;
    long long my_last_i = my_first_i + my_n;

    if (my_first_i % 2 == 0)
        factor = 1.0;
    else
        factor = -1.0;

    for (i = my_first_i; i < my_last_i; i++, factor = -factor) {
        pthread_mutex_lock(&mutex); // Bloqueia o mutex
        sum += factor / (2.0 * i + 1);
        pthread_mutex_unlock(&mutex); // Libera o mutex
    }

    return NULL;
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Use: %s <number_of_threads>\n", argv[0]);
        return 1;
    }

    thread_count = atoi(argv[1]);

    pthread_t* thread_handles;
    thread_handles = (pthread_t*)malloc(thread_count * sizeof(pthread_t));
    
    pthread_mutex_init(&mutex, NULL);

    for (long thread = 0; thread < thread_count; thread++) {
        pthread_create(&thread_handles[thread], NULL, Thread_sum, (void*)thread);
    }

    for (long thread = 0; thread < thread_count; thread++) {
        pthread_join(thread_handles[thread], NULL);
    }

    sum *= 4.0;
    
    printf("Número de threads utilizadas: %d", thread_count);
    printf("\nValor estimado de pi: %.20lf\n\n", sum);

    free(thread_handles);
    pthread_mutex_destroy(&mutex);
    return 0;
}
