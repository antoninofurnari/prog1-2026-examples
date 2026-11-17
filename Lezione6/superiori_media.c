#include<stdio.h>
#define N 5

int main(void) {
    int x[N] = {1,3,6,9,-1};

    int somma = 0;

    for(int i=0; i<N; i++){
        somma+=x[i];
    }

    double media = (double) somma/N;

    printf("\nNumeri superiori alla media (%.2f):\n", media);
    for (int i = 0; i < N; i++) {
        if (x[i] > media) {
            printf("  - voti[%d] = %d\n", i, x[i]);
        }
    }
}