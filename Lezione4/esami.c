#include <stdio.h>

int main(void) {
    int voto = 0;
    int somma = 0;
    int conteggio = 0;

    // Inizializziamo il massimo con il valore più basso possibile per un esame
    int max = 0;
    // Inizializziamo il minimo con il valore più alto possibile per un esame
    int min = 100;

    printf("Inserisci i voti degli esami (compresi tra 18 e 31; inserisci -1 per terminare):\n");

    while (1) { // Ciclo potenzialmente infinito, controllato all'interno
        printf("Inserisci voto: ");
        if (scanf("%d", &voto) != 1) {
            printf("Inserimento non valido.\n");
            break;
        }

        // Caso di uscita volontaria
        if (voto == -1) {
            break; // Esce immediatamente dal ciclo
        }

        // Filtro di validità: i voti validi vanno da 18 a 30 (31 per lode)
        if (voto < 18 || voto > 31) {
            printf("Voto non valido! Deve essere compreso tra 18 e 31 (31 = 30L).\n");
            continue; // Salta il resto del corpo del ciclo e torna in cima
        }

        // Se siamo arrivati qui, il voto è valido. Aggiorniamo le statistiche:
        somma = somma + voto;
        conteggio++;

        if (voto > max) {
            max = voto;
        }
        if (voto < min) {
            min = voto;
        }
    }

    // Calcolo e stampa dei risultati
    if (conteggio > 0) {
        double media = (double) somma / conteggio;
        printf("\n--- Statistiche Esami ---\n");
        printf("Esami superati: %d\n", conteggio);
        printf("Voto massimo: %d\n", max);
        printf("Voto minimo: %d\n", min);
        printf("Media voti: %.2f\n", media);
    } else {
        printf("\nNessun voto valido inserito.\n");
    }

    return 0;
}