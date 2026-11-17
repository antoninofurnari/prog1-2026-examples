#include <stdio.h>
#include <math.h>
#define PI 3.14

int main(void) {
    //const float pi = 3.14;


    float raggio = 3.2;
    float area = 2*M_PI*raggio;

    /*
    printf("sizeof(12): %zu\n", sizeof(12));
    printf("sizeof(12l): %zu\n", sizeof(12l));
    printf("sizeof(12.5): %zu\n", sizeof(12.5));
    printf("sizeof(12.5f): %zu\n", sizeof(12.5f));
    printf("sizeof(12.5L): %zu\n", sizeof(12.5L));
    */

    printf("Area: %.2f\n", area);



}