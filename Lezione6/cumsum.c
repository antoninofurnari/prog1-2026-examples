// x
// y[i] = x[0] + x[1] + ... + x[i]

// x: 1 3 2 5 7 8
// y: 1 4 6 11 18 26

#include<stdio.h>
#define N 5

int main(void) {
    printf("Inserisci %d numeri: ", N);

    int x[N] = {0};

    for(int i=0; i<N; i++) {
        scanf("%d", &x[i]);
    }

    printf("Ecco l'array che hai inserito: ");
    for(int i=0; i<N; i++) {
        printf("%d ",x[i]);
    }

    int y[N];

    y[0] = x[0];
    for(int i=1; i<N; i++) {
        y[i] = y[i-1] + x[i];
    }

    printf("Array cumulativo: ");
    for(int i=0; i<N; i++) {
        printf("%d ",y[i]);
    }
/*
    for(int i=0; i<N; i++) {
        y[i] = 0;
        for(int j=0; j<=i; j++) {
            y[i] += x[j];
        }
    }
*/
}