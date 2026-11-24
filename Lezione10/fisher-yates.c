#include<stdio.h>
#include<stdlib.h>
#include<time.h>

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

/* ERRATO
void shuffle(int x[N]) {
    for(int i=0; i<N; i++) {
        int j = rand() % N;
        swap(&x[i], &x[j]);
    }
}*/

void shuffle(int x[N]) {
    for(int i=N-1; i>0; i--) {
        int j = rand() % (i+1);
        if(i!=j) 
            swap(&x[i], &x[j]);
    }
}


int main() {
    srand(time(NULL));
    int a[N] = {3,10,33,10,27,4,6,7,42,15};

    printf("Array originale: ");
    stampa(a);

    shuffle(a);
    printf("Array disordinato: ");
    stampa(a);

}