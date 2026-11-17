#include <stdio.h>

int main(void) {
    double raggio = 0.0;
    double area = 0.0;
    double PI = 3.1415926535;

    printf("Inserisci il raggio del cerchio (numero reale): ");
    scanf("%lf", &raggio); // Chiede il raggio all'utente

    area = PI * raggio * raggio;

    printf("\n--- Risultati ---\n");
    printf("Raggio inserito: %f cm\n", raggio);
    printf("Area calcolata:  %f cm^2\n", area);
}