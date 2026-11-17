#include <stdio.h>

int main(void) {
    int numero;
    int max;
    int min;

    // Leggiamo il primo numero per impostare lo stato iniziale
    printf("Inserisci il 1° numero: ");
    if (scanf("%d", &numero) != 1) {
        printf("Errore di lettura.\n");
        return 1;
    }
    max = numero;
    min = numero;

    // Ciclo per i restanti 9 numeri
    int i = 2; // Contatore: indica quale numero stiamo leggendo
    while (i <= 10) {
        printf("Inserisci il %d° numero: ", i);
        if (scanf("%d", &numero) != 1) {
            printf("Errore di lettura.\n");
            return 1;
        }

        if (numero > max) {
            max = numero; // Aggiorna il massimo provvisorio
        }
        if (numero < min) {
            min = numero; // Aggiorna il minimo provvisorio
        }
        i++; // Passa al numero successivo
    }

    printf("\n--- Risultati ---\n");
    printf("Il numero massimo inserito è: %d\n", max);
    printf("Il numero minimo inserito è: %d\n", min);

    return 0;
}