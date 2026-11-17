#include <stdio.h>

int main(void) {
    int x = 0;
    double y = 0;

    printf("Inserisci un numero intero: ");
    scanf("%d", &x);

    printf("Il numero intero inserito e': %d\n\n", x);

    printf("Inserisci un numero in virgola mobile: ");
    scanf("%lf", &y);

    printf("Il numero in virgola mobile inserito e': %lf\n", y);
}