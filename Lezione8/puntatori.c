#include <stdio.h>

int main(void) {
    int x = 42;
    int y = -8;
    int *p = &x; // p memorizza l'indirizzo di x

    printf("Valore di x: %d\n", x);              // Stampa 42
    printf("Valore di p: %p\n", p);    // Stampa es. 0x7ffd82

    printf("Indirizzo di x: %p\n", &x);

    *p = 100; // Dereferenziazione: vai all'indirizzo in p e scrivi 100
    p = &y;

    printf("Valore di p: %p\n", p);    // Stampa es. 0x7ffd82
    *p = 20;


    printf("Nuovo valore di x: %d\n", x);        // Stampa 100!
    printf("Nuovo valore di y: %d\n", y);        // Stampa 20!

    p=&x;

    printf("Valore puntato da p: %d\n", *p);        // Stampa 20!
/*
    x -> int
    &x -> int*
    p -> int*
    *p -> int

    */




    int xx=2;
    double yy=9.1;

    int *pxx = &xx;
    double *pyy = &yy;


    int *abc;

    //if(abc)
    *abc = -237;

    printf("Hello");

    return 0;
}