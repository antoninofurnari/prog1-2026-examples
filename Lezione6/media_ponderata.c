#include<stdio.h>
#define N 4

int main(void) {
    int voti[N] = {0};
    int crediti[N] = {0};

    printf("Inserisci %d voti compresi tra 18 e 30 e relativi crediti.\n", N);

    for(int i=0; i<N; i++) {
        do {
            printf("Inserisci il voto %d: ", i+1);
            scanf("%d", &voti[i]);
            printf("Inserisci i crediti del voto %d: ", i+1);
            scanf("%d", &crediti[i]);
        } while (voti[i]<18 || voti[i]>30 || crediti[i]<0);
    }

    int numeratore = 0;
    int denominatore = 0;

    for(int i=0; i<N; i++) {
        numeratore = numeratore + voti[i]*crediti[i];
        denominatore = denominatore + crediti[i];
    }

    double media = (double) numeratore / denominatore;

    printf("Media pesata: %.2f", media);
}