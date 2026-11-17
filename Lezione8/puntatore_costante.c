#include<stdio.h>

void stampa(const int* x) {
    int y = -12;
    printf("%d\n",*x);
}

int main() {
    int x = 42;

    const int y = -20;
    //y=0;

    const int *p = &x;
    //*p = 0;

    int* const q = &x;

    *q = 0;

    int arr[5] = {0,2,3};

    const int* const k = &x;


    stampa(p);
}