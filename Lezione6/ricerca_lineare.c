#include<stdio.h>
#define N 5

int main(void) {
    int voti[N] = {28, 25, 25, 30, 18};
    int target = 30;
    int trovato = 0; // flag: 0 = non trovato, 1 = trovato

    int i;
    for (i = 0; i < N ; i++) {
        if (voti[i] == target) {
            trovato = 1;
            break;
        }
    }

    if (trovato) {
        printf("Valore %d trovato nell'array all'indice %d.\n", target, i);
    } else {
        printf("Valore %d non presente.\n", target);
    }
}