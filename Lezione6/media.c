#include <stdio.h>
#define N 5

int main(void) {
    int voti[N] = {28, 30, 25, 27, 18};
    int somma = 0;

    for (int i = 0; i < N; i++) {
        somma += voti[i];
    }

    double media = (double)somma / N; // cast esplicito per la divisione reale!
    printf("Media: %.2f\n", media);

    return 0;
}