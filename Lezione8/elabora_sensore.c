#include <stdio.h>

void elabora_sensore(const int *dati, int *risultato) {
    // BUG: Mancano i controlli di sicurezza!
    // Se dati o risultato sono NULL, avremo un crash.
    *risultato = (*dati) * 2;
}

int main(void) {
    int sensor_val = 25;
    int output = 0;

    // Caso d'uso corretto:
    elabora_sensore(&sensor_val, &output);
    printf("Risultato 1: %d\n", output);

    // Caso d'uso errato (ad esempio, sensore scollegato o guasto):
    int *sensore_guasto = NULL;
    elabora_sensore(sensore_guasto, &output); // Qui il programma andrà in crash!

    printf("Risultato 2: %d\n", output);
    return 0;
}