#include <stdio.h>
#define N 5

int main(void) {
    int voti[N] = {28, 30, 25, 27, 18};

    int pos_max = 0;   // teniamo anche l'indice della posizione
    int pos_min = 0;

    for (int i = 1; i < N; i++) { // partiamo da 1, non da 0!
        if (voti[i] > voti[pos_max]) {
            pos_max = i;
        }
        if (voti[i] < voti[pos_min]) {
            pos_min = i;
        }
    }

    printf("Voto massimo: %d (posizione %d)\n", voti[pos_max], pos_max);
    printf("Voto minimo:  %d (posizione %d)\n", voti[pos_min], pos_min);

    return 0;
}