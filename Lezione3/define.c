#include<stdio.h>
#define A 1
#define B "ciao"
#define C (3+2)
#define il_mio_printf printf

int main(void) {
    int x = A; // 1
    printf(B); // ciao
    int y = C; // 5
    
    il_mio_printf("ciao");
}