#include <stdio.h>

int main(void) {

    int divisore = 0;
    int dividendo = 10;

    // Grazie al cortocircuito, poichè "divisore != 0" è Falso (0),
    // la divisione per zero non viene eseguita e il programma non crasha.
    /*if (divisore != 0 && (dividendo / divisore) > 2) {
        printf("Condizione superata in sicurezza!\n");
    } else {
        printf("Condizione non superata in sicurezza!\n");
    }*/

    if(divisore !=0 && (divisore = divisore +1) && (dividendo / divisore) > 2) {
        printf("Condizione superata in sicurezza!\n");
    }

    printf("%d\n", divisore);


}