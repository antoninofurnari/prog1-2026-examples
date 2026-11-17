#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 5;
    int y = 10;

    swap(&x, &y); // Passa i valori di x e y (fotocopie)
    printf("x = %d, y = %d\n", x, y); // Stampa x = 5, y = 10!

    char *p;

    printf("sizeof(p): %zu\n", sizeof(p));
    return 0;
}