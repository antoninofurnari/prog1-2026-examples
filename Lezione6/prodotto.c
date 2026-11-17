#include <stdio.h>
#define N 5

int main(void) {
    int voti[N] = {28, 30, 25, 27, 18};
    int prodotto = 1;

    for (int i = 0; i < N; i++) {
        prodotto *= voti[i];
    }

    printf("Prodotto: %d\n", prodotto);

    return 0;
}