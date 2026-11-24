#include <stdio.h>

int main(void) {
    char password[8] = "segreto"; // 7 caratteri + '\0'
    char input[8];                // Buffer di input limitato a 8 byte

    printf("Inserisci la password di sblocco: ");
    // PERICOLO: scanf non sa quanto sia grande 'input'!
    scanf("%s", input);

    // Se l'utente digita una password molto lunga (es. "1234567890abcdef"),
    // i caratteri in eccesso sborderanno in memoria sovrascrivendo
    // la variabile 'password' o i registri dello Stack Frame.
    printf("Hai inserito: %s\n", input);
    printf("Password di controllo attuale: %s\n", password);

    return 0;
}