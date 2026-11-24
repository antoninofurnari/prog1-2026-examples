#include <stdio.h>
#include <string.h>

int main(void) {
    // Definizione di un array di stringhe: 3 elementi, ciascuno con spazio per massimo 10 byte
    char arr[3][10] = {
        "Etna",
        "Corso",
        "Catania"
    };

    strcpy(arr[1], "Ciao");

    // arr[i] rappresenta l'indirizzo di inizio della riga i-esima (quindi della stringa corrispondente)
    for (int i = 0; i < 3; i++) {
        printf("Indice %d: %s\n", i, arr[i]);
    }

    return 0;
}