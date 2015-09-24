#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define BAIGNOIRE_CAPACITY 100

#define TRUE  1
#define FALSE 0

void *remplissage(void*);
void *fuite(void*);

struct arg_struct{
    int qty;
    int time;
    int* content;

};

int main()
{
    int* baignoireContent = malloc(sizeof(int));
    pthread_t tRemplis;
    pthread_t tFuis;
    struct arg_struct args_r;
    struct arg_struct args_f;

    args_r.qty = 10;
    args_r.time = 1;
    args_r.content = baignoireContent;

    args_f.qty = 20;
    args_f.time = 3;
    args_f.content = baignoireContent;


    pthread_create(&tRemplis, NULL, remplissage, (void *)&args_r);
    pthread_create(&tFuis, NULL, fuite, (void *)&args_f);

    pthread_join(tRemplis, NULL);
    pthread_join(tFuis, NULL);
    printf("La baignoire est enfin pleine.\n");
    free(baignoireContent);
    return 0;
}

void *remplissage(void* args){
    struct arg_struct *arguments = (struct arg_struct *)args;
    while((*arguments->content) < BAIGNOIRE_CAPACITY){
        (*arguments->content) += arguments->qty;
        printf("La baignoire se remplit. Contenu: %d\n", *arguments->content);
        sleep(arguments->time);
    }

}

void *fuite(void* args){
    int fuiteColmatee = FALSE;
    struct arg_struct *arguments = (struct arg_struct *)args;
    while((*arguments->content) < BAIGNOIRE_CAPACITY){
        if((*arguments->content) < BAIGNOIRE_CAPACITY && fuiteColmatee == FALSE){
            (*arguments->content) -= arguments->qty;
            if(*arguments->content < 0){
                *arguments->content = 0;
            }
            printf("La baignoire se vide. Contenu: %d\n", *arguments->content);
            if((*arguments->content) <= 0){
                printf("La baignoire est complètement vide. Colmatage de la fuite.\n");
                fuiteColmatee = TRUE;
            }
            sleep(arguments->time);
        }
    }

}
