#include <stdio.h>

int main(void) {
    // PUNTO A
    printf("Inserisci i dati delle sonde (m1 q1 m2 q2): ");
    double m1, q1, m2, q2;
    int num = scanf("%lf %lf %lf %lf", &m1, &q1, &m2, &q2);

    if (num != 4) {
        printf("Errore nel formato in input. Termino l'esecuzione.\n");
        return(-1);
    }

    printf("\nValori letti - Sonda 1: m=%.2f, q=%.2f - Sonda 2: m=%.2f, q=%.2f\n", m1, q1, m2, q2); 

    // PUNTO B
    if(m1 == m2) { // le traiettorie sono parallele, quindi le sonde non si incontreranno mai
        printf("Rilevamento fallito: le traiettorie sono parallele.\n");
        return 1;
    } 
    
    // per via del return 1, se sono arrivato qui, allora m1 != m2
    double tc, xc;

    tc = (q2 - q1) / (m1 - m2); // non serve controllare che (m1 - m2) != perché ho già controllato che m1 != m2
    xc = (m1 * tc) + q1;

    printf("Istante di impatto temporale (t): %.2f s\n", tc);

    printf("Posizione dell'impatto nello spazio (x): %.2f m\n",xc);

    // PUNTO D
    if (tc <=0 ) { // la collisione avviene nel passato
        printf("Nessun pericolo: la collisione e' avvenuta nel passato.\n");
        return 1;
    } else { // la collisione avviene nel futuro
        printf("ATTENZIONE: Collisione futura rilevata!\n");

        if(tc < 5) { // tc è > 0 (controllo if sopra) e minore di 5 (questo if)
            // PUNTO E
            double m2s = m1 + (q1-q2) / 5.0;

            printf("Velocita' suggerita per sonda 2: %.2f\n",m2s);
            return 0;
        }
    }
}