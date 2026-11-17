#include <stdio.h>

int main(void) {
    int haPatente = 1; // 1 rappresenta Vero, 0 rappresenta Falso
    int eta = 17;

    // L'operatore logico && combina i due controlli
    if (eta >= 18 && haPatente) {
        printf("Autorizzato alla guida dell'autovettura.\n");
    } else {
        printf("Non autorizzato alla guida dell'autovettura.\n");
    }

    // Il NOT logico inverte la condizione
    int pioggia = 0; // 1 rappresenta Vero (Piove)
    if (!pioggia) {
        printf("Puoi fare una passeggiata all'aperto.\n");
    } else {
        printf("Prendi l'ombrello!\n");
    }

    return 0;
}