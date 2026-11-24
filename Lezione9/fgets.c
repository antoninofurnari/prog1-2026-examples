#include <stdio.h>
#include <string.h>

int main(void) {
    char nome[20];
    printf("Inserisci il tuo nome: ");

    // Legge al massimo 19 caratteri lasciando il 20-esimo per il '\0'
    if (fgets(nome, sizeof(nome), stdin) != NULL) {
        // fgets acquisisce anche l'invio '\n', rimuoviamolo se presente
        nome[strcspn(nome, "\n")] = '\0';
        printf("Ciao %s!\n", nome);
    }

    char c;
    while((c = getchar())!='\n' && c!=EOF);

    char str[100];
    printf("Inserisci una stringa max 99 caratteri: ");
    scanf("%s", str);
    printf("%s",str);
    return 0;
}