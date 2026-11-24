#include <stdio.h>
#define N 2
#define M 3

// La colonna (4) serve alla CPU per il calcolo corretto dell'offset in RAM!
void stampa_matrice(int a[N][M]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

void stampa_matrice2(int a[][M], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int a[N][M] = {
        {1,2,3},
        {4,5,6}
    };

    stampa_matrice(a);
    printf("\n");
    stampa_matrice2(a, N);

}

