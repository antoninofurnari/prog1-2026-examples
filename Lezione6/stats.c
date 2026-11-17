#include <stdio.h>
#define N 10

int main(void) {
    int voti[N];
    int somma = 0;

    // Acquisizione con validazione do-while (ripasso Lezione 5)
    printf("Inserisci %d voti (18-30):\n", N);
    for (int i = 0; i < N; i++) { // scorre le N caselle dell'array
        do { //continua finché l'utente non inserisce un numero nel range [18, 30]
            printf("Voto %d: ", i + 1);
            scanf("%d", &voti[i]);
        } while (voti[i] < 18 || voti[i] > 30);
        somma += voti[i];
    }

    // Calcolo media
    double media = (double)somma / N;

    // Calcolo max, min e conteggio in un unico ciclo
    int max = voti[0], min = voti[0];
    int superano_media = 0;
    for (int i = 0; i < N; i++) {
        if (voti[i] > max) max = voti[i];
        if (voti[i] < min) min = voti[i];
        if (voti[i] > media) superano_media++;
    }

    // Report finale
    printf("\n--- Analisi Voti ---\n");
    printf("Media:           %.2f\n", media);
    printf("Massimo:         %d\n", max);
    printf("Minimo:          %d\n", min);
    printf("Sopra la media:  %d/%d\n", superano_media, N);

    return 0;
}