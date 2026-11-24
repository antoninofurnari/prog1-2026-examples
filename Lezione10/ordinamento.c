#include<stdio.h>
#include<stdbool.h>
#define N 10

void swap(int *a, int *b) {
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

int main() {
    int a[N] = {15,10,33,10,27,3,6,7,42,4};

    printf("Array originale: ");
    stampa(a);

    bubblesort(a);
    printf("Array ordinato: ");
    stampa(a);
}