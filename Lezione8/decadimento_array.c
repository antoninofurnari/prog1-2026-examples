#include <stdio.h>

void stampa_dimensione(int *arr, int dim) {
    // All'interno della funzione, arr è diventato un semplice puntatore a int (int *).
    // sizeof(arr) restituirà la dimensione di un puntatore (8 byte su sistemi a 64-bit).

    printf("%d", arr[4]);
    //printf("In funzione: sizeof(arr) = %zu byte\n", sizeof(arr));
}

int main(void) {
    int voti[5] = {18, 22, 25, 28, 30};
    int *p = voti;

    /*
    printf("indirizzo di voti: %p\n", voti);
    printf("valore di p: %p\n", p);

    printf("%d %d %d %d\n", voti[2], p[2], *(voti+2), *(p+2));


    printf("%zu %zu\n", sizeof(voti), sizeof(p));
    */

    // Nel main, voti è un array statico di 5 interi.
    // sizeof(voti) restituisce la dimensione totale: 5 * sizeof(int) = 20 byte.
    printf("Nel main: sizeof(voti) = %zu byte\n", sizeof(voti));

    stampa_dimensione(voti, 5);
    return 0;
}