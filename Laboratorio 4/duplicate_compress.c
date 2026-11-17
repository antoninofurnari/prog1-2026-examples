#include<stdio.h>
#define MAX 100000

void trova_estremi(const int *arr, int n, int *min_idx, int *max_idx) {
    *min_idx = 0;
    *max_idx = 0;

    for(int i=1; i<n; i++) {
        if(arr[i] > arr[*max_idx])
            *max_idx = i;
        if(arr[i] < arr[*min_idx])
            *min_idx = i;
    }
}

int conta_occorrenze(const int* start, int length, int valore) {
    int conta = 0;
    for(int i=0; i<length; i++) {
        if(start[i] == valore)
            conta++;
    }
    return conta;
}

void compatta_array(int *arr, int *n) {
    // 5 10 5 8 5 10

    // i = 0
    // 5 10 8 

    // 2 2 2

    for(int i=0; i<(*n)-1; i++) { //ciclo esterno: scorre tutti i numeri
        int offset = i+1;
        int len = *n - offset;
        int valore_corrente = arr[i];
        int num_ripetizioni = conta_occorrenze(arr + offset, len, valore_corrente);
        if(num_ripetizioni>0) { // ci sono dei duplicati
            for(int j=i+1; j<*n; j++) { // scorro tutti gli elementi a partire dal prossimo
                if(arr[j] == valore_corrente) { // ho trovato un duplicato
                    for(int k = j; k < (*n)-1; k++) { // elimino il duplicato facendo scorrere gli elementi da sinistra a destra
                        arr[k] = arr[k+1]; //sovrascrive l'elemento corrente con il successivo
                    }
                    (*n)--; //aggiorna la lunghezza dell'array
                    j--;
                }
            }
        }
    }
}

int main() {
    // ================== PUNTO A =========
    printf("Inserisci la dimensione dell'array: ");
    int array[MAX];
    int N;
    scanf("%d", &N);

    printf("Inserisci gli elementi dell'array: ");
    for(int i=0; i<N; i++) {
        scanf("%d", &array[i]);
    }

    // ============ Punto B ===============
    /*int min_idx, max_idx;
    trova_estremi(array, N, &min_idx, &max_idx);

    printf("Min: %d, Max: %d", array[min_idx], array[max_idx]);*/

    // =========== Punto C =======
    
    /*
    int num5 = conta_occorrenze(array, N, 5);
    int num2 = conta_occorrenze(array, N, 2);

    printf("Num5: %d, Num2: %d\n", num5, num2);*/

    //========== PUNTO D ===========
    // 5 10 5 8 10 12

    compatta_array(array, &N);

    printf("\n");
    for(int i=0; i<N; i++) {
        printf("%d ", array[i]);
    }
}