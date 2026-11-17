#include <stdio.h>
#define N 5

int main(void) {
    int voti[N];

    // Lettura dell'array
    printf("Inserisci %d voti:\n", N);
    for (int i = 0; i < N; i++) {
        printf("Voto %d: ", i + 1); // i+1 perche l'utente conta da 1
        int x;
        scanf("%d", &x);
        voti[i] = x;
    }

    // Stampa dell'array
    printf("\nVoti inseriti: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", voti[i]);
    }
    printf("\n");

    return 0;
}