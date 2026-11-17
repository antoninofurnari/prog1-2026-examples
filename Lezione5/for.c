#include<stdio.h>

int main(void) {
    int i = 0;
    while(i<10) { //stampa 10 numeri
        printf("%d\n", i+1);
        i++;
    }

    printf("----------------------------\n");

    for(int j = 0; j<10; j++ ) {
        printf("%d\n", j+1);
    }

    printf("----------------------------\n");

    // stampa numeri pari da 0 a 10
    for(int j = 0; j<=10; j+=2) {
        printf("%d\n", j);
    }

    printf("----------------------------\n");

    int j = 0;
    while(j<=10) { //stampa 10 numeri
        printf("%d\n", j);
        j+=2;
    }

    printf("----------------------------\n");

    for(;j<100;) {
        printf("%d\n", j);
        j++;
        //break;
    }

    int x;

    x = 0;
    int y = x++;
    //int y = x; x++;
    printf("x=%d y=%d\n", x, y);

    x = 0;
    int z = ++x;
    // x++; int y= x;
    printf("x=%d z=%d\n", x, z);
}