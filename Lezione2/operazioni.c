#include <stdio.h>
int main(void) {
    int x;
    int y = (x = ((3 + 2) * 2) + 1);

    x %= 2;

    int z = 9;
    int h = z / 2;

    double z2 = 9;
    double h2 = (double) z / 2;

    printf("x=%d\ny=%d\n", x, y);

    printf("h=%d\n",h);

    printf("h=%f\n",h2);

    printf("%d %f %d\n", 5 / 2, 5.0 / 2, 5 % 2);
}