#include<stdio.h>

int main(void) {
    // PUNTO A
    double y0;
    double vy;

    printf("Inserisci la quota iniziale y0 (m) e la velocita' iniziale vy (m/s): ");
    scanf("%lf %lf", &y0, &vy);

    printf("Valori letti - y0=%.2f m, vy=%.2f m/s\n", y0, vy);

    if(y0 <= 0) { // se y0 è nullo o negativo
        printf("Errore: la quota iniziale y0 deve essere strettamente positiva.\n");
        return 1; // termina l'esecuzione del programma
    } 

    // se sono arrivato qui, i valori sono stati letti e y0>0
    const double g = 9.81;
    const double k = 0.05;
    const double dt = 0.1;

    // 11 | 12 | 19 
    //printf(" Tempo (s) | Quota (m) | Velocita' (m/s)\n");
    printf("%10s |%11s |%17s  \n", "Tempo (s)", "Quota (m)", "Velocita' (m/s)");
    printf("--------------------------------------------\n");

    // Punto C
    double ay, y, t;

    y = y0;
    t = 0;

    while(y>0 && t <= 20) {
        ay = -g -k*vy;
        vy = vy + ay * dt;
        y = y + vy * dt;
        t = t + dt;
        printf("%10.2f |%11.2f |%17.2f\n", t, y, vy);
    }

    // Punto D
    printf("--------------------------------------------\n");
    if (y <= 0) {
        printf("Impatto rilevato! Tempo di volo: %.2f s. Velocita' finale: %.2f m/s\n", t, vy);
        return 0;
    } else {
        printf("Tempo limite di 20 secondi superato. Altitudine residua: %.2f m\n", y);
        return 0;
    }
}