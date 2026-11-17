#include <stdio.h>

int main(void) {
    int voto = 0; 
    int voto_non_valido;

    do {
        printf("Inserisci il voto dell'esame (18-30): ");
        scanf("%d", &voto);

        // Se il voto inserito non è valido, stampiamo un avviso prima di ripetere il ciclo
        voto_non_valido = (voto < 18 || voto > 30);
        
        if (voto_non_valido) {
            printf("Voto non valido! Riprova.\n\n");
        }
    } while (voto_non_valido);

    printf("Voto registrato con successo: %d\n", voto);
    return 0;
}