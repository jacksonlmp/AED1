#include <stdio.h>
#include <stdlib.h>

void bubblesort(int *vet, int tam){
    int j, aux, trocou = 1;

    while(trocou != 0){
        trocou =0;
        for(j = 0; j < tam-1; j++){
            if(vet[j] > vet[j + 1]){
                aux = vet[j];
                vet[j] = vet[j + 1];
                vet[j + 1] = aux;
                trocou = 1;
            }
        }
    }
}

int main(){
    int vet[10] = {6, 9, 4 ,2 ,3 , 0, 15, 7, 21, 14};
    int i = 0;
    bubblesort(&vet, 10);

    for(i = 0; i < 10; i++){
       printf("%d\n",vet[i]);
   }
}
