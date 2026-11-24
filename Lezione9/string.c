#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[50] = "Etna";
    char str2[] = " Coder";
    char buffer[50];

    // Lunghezza logica
    printf("Lunghezza di str1: %zu\n", strlen(str1)); // Stampa 4

    // Copia
    strcpy(buffer, str1);
    printf("Buffer copiato: %s\n", buffer); // Stampa "Etna"

    // Concatenazione
    strcat(buffer, str2);
    printf("Buffer concatenato: %s\n", buffer); // Stampa "Etna Coder"

    // Confronto lessicografico
    if (strcmp(str1, "Etna") == 0) {
        printf("Le due stringhe sono identiche!\n");
    }

    int confronto = strcmp("albero", "barca");
    printf("Confronto 'albero' vs 'barca': %d\n", confronto); // Ritorna valore < 0

    return 0;
}