#include <stdio.h>

inline int add(int x, int y) {
    return x + y;
}

int main(void) {
    int x = 3 + add(5, 5);
    return x;
}