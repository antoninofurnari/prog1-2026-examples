#include<stdio.h>
#include<stdbool.h>
#define N 25

void stampa(const int x[N]) {
    for(int i=0; i<N; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

void insertionsort(int x[N]) {
    for (int i = 1; i<N; i++) {
        int tmp = x[i];

        int j = i - 1;
        while(j >= 0 && x[j] > tmp) {
            x[j + 1] = x[j];
            j--;
        }

        x[j+1] = tmp;
    }
}

int ricerca_lineare(const int x[], int n, int valore) {
    for(int i=0; i<n; i++){
        printf("*");
        if(x[i]==valore) {
            return i;
        }
    }

    return -1;
}

int ricerca_dicotomica(const int x[], int n, int valore) {
    int low = 0;
    int high = n-1;

    while(low <= high) {
        printf("+");
        int mid = low + (high-low) / 2;

        if(valore == x[mid]) {
            return mid;
        }

        if(valore > x[mid]) {
            low = mid + 1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}


int main() {
    int a[N] = {15,10,33,10,27,3,6,7,42,4,-1,6,8,9,99,3,6,2,7,8,2,6,4,7,9};

    insertionsort(a);
    printf("Array originale: ");
    stampa(a);

    int valore = -1;
    int idx = ricerca_lineare(a,N,valore);
    printf("\n[lineare] Indice del valore %d = %d\n", valore, idx);

    

    idx = ricerca_dicotomica(a,N,valore);
    printf("[dicotomica] Indice del valore %d = %d\n", valore, idx);
}