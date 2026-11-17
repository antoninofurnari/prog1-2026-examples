#include <stdio.h>

int main(void) {
    int limit = 15;
    int somma;        // BUG 1: variabile accumulatore non inizializzata a 0! Conterrà valore spazzatura (garbage value).
    int is_prime = 1; // BUG 2: dichiarato qui, ma non resettato a 1 ad ogni iterazione del ciclo!

    printf("Calcolo la somma dei numeri primi fino a %d...\n", limit);

    for (int i = 2; i <= limit; i++) {
        // Verifichiamo se i è primo dividendolo per tutti i numeri da 2 a i
        for (int j = 2; j <= i; j++) { // BUG 3: j <= i includerà anche i stesso, quindi i % i == 0 sarà sempre vero!
            if (i % j == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime) {
            somma += i;
            printf("Trovato primo: %d\n", i);
        }
    }

    printf("La somma finale dei numeri primi e': %d (Attesa: 41)\n", somma);
    return 0;
}