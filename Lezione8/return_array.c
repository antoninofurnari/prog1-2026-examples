#include<stdio.h>

int* return_array() {
    int x[5] = {18};
    return x;
}

void fun() {
    int y[10] = {0};
}

int main() {
    int *x = return_array();

    fun();

    printf("%d", x[0]);
}