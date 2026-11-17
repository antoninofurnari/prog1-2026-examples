#include<stdio.h>

int main(void) {
    int punti;

    printf("Inserisci punti: ");
    scanf("%d", &punti);

    if (punti > 100) {
        printf("Fuori scala!\n");
    } else {
        printf("In scala!\n");
    }
    

    printf("check\n");
    
    if (punti <= 100) {
        if (punti >= 90) {
            printf("Eccellente\n");
        } else if (punti >= 60) {
            printf("Sufficiente\n");
        } else {
            printf("Non sufficiente\n");
        }
    }
}