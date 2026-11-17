#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(void) {
    srand(time(NULL));

    printf("%d\n",rand());
    printf("%d\n",rand());
    printf("%d\n",rand());

    // 5 25 
    // a = 5
    // b = 25
    // rand() % (b-a+1) + a

    int x = rand() % (25 - (5-1)) +5;



    printf("%d\n", x);

    printf("RAND_MAX = %d", RAND_MAX);

    double y = (double) rand() / RAND_MAX;

    printf("\ny=%f",y);
}