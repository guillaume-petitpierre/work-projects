#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <pthread.h>

#define TRUE 1
#define FALSE 0

//Prototypes
void *calculeSomme();

//Var. globales
int SOMME = 0;

int main()
{
    pthread_t tCalcSomme;

    printf("Entrez une liste d'entiers: ");
    pthread_create(&tCalcSomme, NULL, calculeSomme, NULL);
    pthread_join(tCalcSomme, NULL);

    printf("La somme des entiers est: %d", SOMME);


    return 0;
}

void *calculeSomme(){
    char* str = malloc(255*sizeof(char));
    int* nbrList = malloc(255*sizeof(int));
    fgets(str, 255, stdin);

    char* numbers;
    numbers = strtok(str, " ");
    int a = 0;
    while(numbers != NULL){
        nbrList[a] = atoi(numbers);
        numbers = strtok(NULL, " ");
        a++;
    }
    int i = 0;
    for(i = 0; i <= a; i++){
        SOMME += nbrList[i];
    }




}
