#include<stdio.h>
#include<math.h>

int main(void) {
    float x = 2.3, y = 2.9, z = 2.5;

    printf("x=%f\n", round(x));

    int x2 = floor(x);
    printf("x2=%d", x2);
}