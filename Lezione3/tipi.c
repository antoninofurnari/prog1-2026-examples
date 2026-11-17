#include<stdio.h>

int main(void) {
    int x;

    printf("Size of x: %zu\n", sizeof(x)); // tipo di x in byte
    printf("Size of int: %zu\n", sizeof(int)); // 4 byte
    printf("Size of double: %zu\n", sizeof(double)); // 8 byte
    printf("Size of float: %zu\n", sizeof(float)); // 4 byte

    printf("\nSize of short: %zu\n", sizeof(short)); // 2 byte
    printf("Size of short int: %zu\n", sizeof(short int)); // 2 byte
    printf("Size of long int: %zu\n", sizeof(long int)); // 8 byte
    printf("Size of long: %zu\n", sizeof(long)); // 8 byte
    printf("Size of unsigned int: %zu\n", sizeof(unsigned int)); // 4 byte
    printf("Size of unsigned long: %zu\n", sizeof(unsigned long)); // 8 byte


    unsigned y = 3;

    printf("y=%d",y);

    double a = 1234567;

    printf("\n\na=%g\n", a);


    0.123 * 10^6
    0.1235974 * 10^6
}