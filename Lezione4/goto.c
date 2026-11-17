#include<stdio.h>
int main() {
    int x = 10;

    if (x > 5) {
        goto SALTO;
    }

    printf("Questo messaggio viene ignorato.\n");
    goto EXIT;

    SALTO: 
    printf("Siamo saltati direttamente qui.\n");

    EXIT:
    return 0;
}