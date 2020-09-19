void merge(int* vet, int inicio, int meio, int fim){
    int i, j, k;
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int in[n1], fi[n2];

    for(i = 0; i < n1; i++){
        in[i] = vet[inicio + i];
    }
    for(j = 0; j < n2; j++){
        fi[j] = vet[meio + 1 + j];
    }

    i = 0;
    j = 0;
    k = inicio;

    while(i < n1 && j < n2){
        if(in[i] <= fi[j]){
            vet[k] = in[i];
            i++;
        }

        else{
            vet[k] = fi[j];
            j++;
        }
        k++;
    }

    while(i < n1){
        vet[k] = in[i];
        i++;
        k++;
    }

    while(j < n2){
        vet[k] = fi[j];
        j++;
        k++;
    }

}

void mergeSort(int* vet, int inicio, int fim){
    if(inicio < fim){
        int meio = (fim + inicio)/2;

        mergeSort(vet, inicio, meio);
        mergeSort(vet, meio + 1, fim);
        merge(vet, inicio, meio, fim);
    }
}