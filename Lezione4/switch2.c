#include<stdio.h>

int main() {
    char c;

    printf("Inserisci una lettera 'a' o 'b': ");

    scanf("%c", &c);

    switch(c) {
        case 'A':
        case 'a':
            printf("Hai inserito a\n");
            break;
        case 'B':
        case 'b':
            printf("Hai inserito b\n");
            break;
        default:
            printf("Selezione non valida");
    }

}