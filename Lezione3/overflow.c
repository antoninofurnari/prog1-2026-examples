#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    int x = INT_MAX;
    printf("INT_MAX     = %d\n", x);
    printf("INT_MAX + 1 = %d\n", x + 1);  // overflow!

    int y = (x + 100l) / 2;

    printf("%d\n", y);

    #include <stdio.h>

    float troppo_grande = 10e10f * 10e30f;
    printf("%f\n", troppo_grande);   // inf
    printf("%f\n", 0.0 / 0.0);      // nan
    printf("%f\n", 1.0 / 0.0);      // inf
    printf("%f\n", -1.0 / 0.0);     // -inf

    printf("%g\n", DBL_TRUE_MIN/2);

    return 0;


}