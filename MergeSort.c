#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "mergeSort.h"

int main(){

    int c, tam, *vet;
    double t;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tam);

    vet = (int*) malloc(tam * sizeof(int));
    
    for (c = 0; c < tam; c++) {
        vet[c] = rand() % (tam*3) + 1;
    }
   
    t = clock();
    mergeSort(vet, 0, tam);
    t = clock() - t;
    double time_taken = (((double)t)/((CLOCKS_PER_SEC/1000)));

    printf("O vetor demorou %lf s\n", time_taken);

}