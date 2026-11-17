#include<stdio.h>
#define COLS 3
#define ROWS 3
#define DEPTH 3
int main() {
    for(int j=0; j<ROWS; j++) { //scorre le righe
        for(int i=0; i<COLS; i++) { //scorre le colonne
            printf("*");
        }
        printf("\n");
    }


    for(int j=0; j<ROWS; j++) { //scorre le righe
        for(int i=0; i<COLS; i++) { //scorre le colonne
            printf("(%d,%d) ", j, i);
        }
        printf("\n");
    }

    // j | 0 0 0 1 1 1 1 2 2 2 2 3
    // i | 0 1 2 3 0 1 2 3 0 1 2 3 

    for(int k=0; k<DEPTH; k++) {
        printf("\nk=%d\n",k);
        for(int j=0; j<ROWS; j++) { //scorre le righe
            for(int i=0; i<COLS; i++) { //scorre le colonne
                printf("(%d,%d) ", j, i);
            }
            printf("\n");
        }
    }


}