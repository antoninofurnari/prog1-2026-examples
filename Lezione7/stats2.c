#include <stdio.h>
#define N 3


void stampa_report(double media, int max, int min, int superano_media) {
    // Report finale
    printf("\n--- Analisi Voti ---\n");
    printf("Media:           %.2f\n", media);
    printf("Massimo:         %d\n", max);
    printf("Minimo:          %d\n", min);
    printf("Sopra la media:  %d/%d\n", superano_media, N);
}


int calcola_minimo(int array[N]) {
    int min = array[0];
    for(int i=1; i<N; i++) {
        if(array[i]<min) min=array[i];
    }
    return min;
}

int calcola_massimo(int array[N]) {
    int max = array[0];
    for(int i=1; i<N; i++) {
        if(array[i]>max) max=array[i];
    }
    return max;
}

int calcola_somma(int array[N]) {
    int somma=0;
    for(int i=0; i<N; i++) 
        somma+= array[i];
    return somma;
}

double calcola_media(int array[N]) {
    return (double) calcola_somma(array)/N;
}

int calcola_superano_media(int array[N], double media) {
    int num=0;
    for(int i=0; i<N; i++) 
        if(array[i]>media)
            num++;

    return num;
}

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

    double media = calcola_media(voti);
    int min = calcola_minimo(voti);
    int max = calcola_massimo(voti);
    int superano_media = calcola_superano_media(voti, media);

    stampa_report(media, max, min, superano_media);

    return 0;
}