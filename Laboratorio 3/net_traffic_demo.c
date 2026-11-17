#include<stdio.h>
#include<stdlib.h>

int main(void) {
    // PUNTO A
    int H, max_packets, threshold, seed;

    printf("Inserisci H, max_packets, threshold, seed: ");

    scanf("%d %d %d %d", &H, &max_packets, &threshold, &seed);

    int cond = H>=1
     && H<=100 && max_packets >=0 && max_packets <=1000 && threshold >=0 && threshold <= max_packets && seed >=0;

    if(!cond) {
        printf("Errore: parametri di simulazione non validi.\n");
    }

    /*if(H<1 || H>100 || max_packets <0 || max_packets >1000 || threshold <0 || threshold >max_packets || seed<0) {
        printf("Errore: parametri di simulazione non validi.\n");
    }*/

    // PUNTO B
    int packets[100];

    srand(seed);

    printf("\nSimulazione Traffico LAN\n");
    printf("%-7s%s","Host","Pacchetti\n");
    printf("-----------------\n");

    // PUNTO C
    for(int i=0; i<H; i++) { //scorre gli host
        packets[i] = rand() % (max_packets+1);
        printf("%-7d%d\n", i, packets[i]);
    }

    //PUNTO D
    int totale_pacchetti = 0, minimo = packets[0], massimo = packets[0];
    double media;

    for(int i=0; i<H; i++) {
        totale_pacchetti += packets[i];
        
        if(packets[i]<minimo) minimo = packets[i];
        if(packets[i]>massimo) massimo = packets[i];
    }

    media = totale_pacchetti / (double) H;

    printf("Totale pacchetti: %d\n", totale_pacchetti);
    printf("Media per host: %.2f\n", media);
    printf("Min pacchetti: %d\n", minimo);
    printf("Max pacchetti: %d\n", massimo);

    int num_above_threshold = 0, num_max_packets = 0;

    // PUNTO E
    for(int i=0; i<H; i++) {
        if(packets[i] >= threshold)
            num_above_threshold++;

        if(packets[i] == max_packets)
            num_max_packets++;
    }

    printf("Host sopra soglia: %d su %d\n", num_above_threshold, H);
    printf("Host al massimo: %d\n", num_max_packets);
}