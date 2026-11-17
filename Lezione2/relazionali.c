#include <stdio.h>

int main(void) {
    int x = 5;
    int y = 7;
    int z = 5;

    printf("x > y: %d\n", x > y);
    printf("x < y: %d\n", x < y);
    printf("x < y: %d\n", x <= y);
    printf("x == y: %d\n", x == y);
    printf("x == z: %d\n", x == z);
    printf("x != z: %d\n", x != z);
     printf("x != y: %d\n", x != y);
}