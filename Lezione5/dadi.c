#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    srand(time(NULL));

    int somma_giocatore = 0;
    int somma_computer = 0;

    printf("=== SFIDA A DADI ===\n\n");
    for (int i = 1; i <= 3; i++) {
        int tiro_giocatore = 1 + rand() % 6; // Dado da 1 a 6
        int tiro_computer = 1 + rand() % 6;  // Dado da 1 a 6

        printf("Lancio %d:\n", i);
        printf("  Giocatore: %d\n", tiro_giocatore);
        printf("  Computer:  %d\n\n", tiro_computer);

        somma_giocatore += tiro_giocatore;
        somma_computer += tiro_computer;
    }

    printf("Totale Giocatore: %d | Totale Computer: %d\n", somma_giocatore, somma_computer);

    if (somma_giocatore > somma_computer) {
        printf("Hai vinto!\n");
    } else if (somma_computer > somma_giocatore) {
        printf("Vince il computer.\n");
    } else {
        printf("Pareggio!\n");
    }

    return 0;
}