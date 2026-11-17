#include <stdio.h>

int main(void) {
    int scelta = 0;
    printf("--- MENU DISTRIBUTORE ---\n");
    printf("1. Caffè (0.50€)\n");
    printf("2. Tè caldo (0.60€)\n");
    printf("3. Cioccolata (0.70€)\n");
    printf("Inserisci la tua scelta (1-3): ");
    scanf("%d", &scelta); 

    /*
    if(scelta == 1) {
        printf("Hai selezionato: Caffè\n");
    } else if (scelta==2) {
        printf("Hai selezionato: Tè caldo\n");
    } else if (scelta==3) {
        printf("Hai selezionato: Cioccolata\n");
    } else {
        printf("Selezione errata!\n");
    }*/

    switch (scelta) {
        case 1:
            printf("Hai selezionato: Caffè\n");
            break;
        case 2:
            printf("Hai selezionato: Tè caldo\n");
            break;
        case 3:
            printf("Hai selezionato: Cioccolata\n");
            break;
        default:
            printf("Selezione errata!\n");
    }
    
    return 0;
}