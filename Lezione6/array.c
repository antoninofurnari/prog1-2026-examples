#include<stdio.h>
#define N 7

int main(void) {
    int x[N] = {1,3,6,9,0};

    printf("%d\n", x[0]); //1
    printf("%d\n", x[3]); //9

    int i = 2;
    printf("%d\n", x[i]); //6

    for(int i=0; i<N; i++) {
        printf("%d ", x[i]);
    }

    printf("\n%zu\n", sizeof(x));
    printf("\nElementi nell'array: %zu\n", sizeof(x)/sizeof(x[0]));
}