#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <pthread.h>
#define NUM_THREADS 8

void *thread(void *thread_id) {
    int id = *((int *) thread_id);
    sleep(1); // 10 msec.
    printf("Thread %d\n", id);
    return NULL;
}

int main() {
    pthread_t threads[NUM_THREADS];
    int i;
    for ( i = 0; i < NUM_THREADS; i++) {
        int code;
        printf("i value: %d\n", i);
        pthread_create(&threads[i], NULL, thread, &i);
        pthread_join(threads[i], &code);
        if ((int)code != 0) {
            fprintf(stderr, "pthread_create failed!\n");
            return EXIT_FAILURE;
        }
    }
}
