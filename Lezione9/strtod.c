#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char input[] = "a137.56a";
    char *endptr;

    double prezzo = strtod(input, &endptr);

    if (input == endptr) {
        printf("Errore: nessuna conversione numerica trovata!\n");
        printf("%s",endptr);
    } else {
        printf("Prezzo convertito: %.2f\n", prezzo);               // Stampa 137.56
        if(*endptr != '\0') //sono stati trovati caratteri non convertibili
            printf("Stringa non convertita rimanente: '%s'\n", endptr); // Stampa " euro"
    }
    return 0;
}