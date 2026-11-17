#include <stdio.h>
int main(void) {
    char c = 'A';
    printf("Visualizzato come carattere: %c\n", c); // Stampa: A
    printf("Visualizzato come intero:    %d\n", c); // Stampa: 65

    // Possiamo fare operazioni matematiche sui caratteri!
    c = c + 1;
    printf("Nuovo carattere:             %c\n", c); // Stampa: B (66 in ASCII)
    c = 126;
    printf("Nuovo carattere:             %c\n", c); // 
    return 0;
}