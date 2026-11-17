#include <stdio.h>

int main(void) {
    int dividendo = 157;
    int divisore = 5;

    /*
    17 - 5 = 12  // 1
    12 - 5 = 7 // 2
    7 - 5 = 2 // 3

    Q   |   R 
    0   |   17     Q*divisore + R = 0*5 + 17 = 17
    1   |   12
    2   |   7
    3   |   2
    */

    int quoziente = 0;
    int resto = dividendo;

    // Sottraiamo finché il resto è maggiore o uguale al divisore
    while (resto >= divisore) {
        resto = resto - divisore; // Aggiorna lo stato!
        quoziente++;
    }

    /*
    R   17  12  7   2    
    Q   0   1   2   3
    */
    
    printf("Quoziente: %d, Resto: %d\n", quoziente, resto);
    return 0;
}