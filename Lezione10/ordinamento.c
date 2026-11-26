#include<stdio.h>
#include<stdbool.h>
#define N 10

void swap(int *a, int *b) {
    int tmp = *a;
    *a=*b;
    *b=tmp;
}

void swap_ottimizzato(int *a, int *b) {
    if(a==b) return; //se gli indirizzi sono uguali, ho finito
    int tmp = *a;
    *a=*b;
    *b=tmp;
}

void stampa(const int x[N]) {
    for(int i=0; i<N; i++) {
        printf("%d ", x[i]);
    }
    printf("\n");
}

void bubblesort(int x[N]) {
    for(int i=0; i<N-1; i++) {
        bool swapped = false;
        // gli ultimi i elementi sono ordinati
        for(int j=0; j < N-1-i; j++) {
            if(x[j] > x[j+1]) {
                swap(&x[j], &x[j+1]);
                swapped = true;
            }
        }
        if(!swapped)
            break;
    }
}

void selectionsort(int x[N]) {
    for(int i=0; i < N-1; i++) {
        int min_idx = i;
        for(int j=i+1; j<N; j++) {
            if(x[j] < x[min_idx]) {
                min_idx = j;
            }
        }

        if(min_idx!=i)
            swap(&x[min_idx], &x[i]);
    }
}

void selectionsort_ptr(int x[N]) {
    for(int i=0; i < N-1; i++) {
        int *ptr_min = x + i; // x+i equivalente a &x[i]
        for(int j=i+1; j<N; j++) {
            if(x[j] < *ptr_min) {
                ptr_min = x + j;
            }
        }

        if(ptr_min == &x[i])
            swap(ptr_min, &x[i]);
    }
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

int main() {
    int a[N] = {15,10,33,10,27,3,6,7,42,4};

    printf("Array originale: ");
    stampa(a);

    bubblesort(a);
    printf("[bubblesort] Array ordinato: ");
    stampa(a);

    selectionsort(a);
    printf("[selectionsort] Array ordinato: ");
    stampa(a);

    insertionsort(a);
    printf("[insertionsort] Array ordinato: ");
    stampa(a);
}