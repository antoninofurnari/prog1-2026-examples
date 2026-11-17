#include<stdio.h>

int global = 0;

int somma(int x, int y) {
    global++;
    return x + y + global;
}

void fun(int x) {
    global++;
    x++;
}

int main(void) {
    int z = somma(2, 3);
    printf("%d\n", z); //5
    fun(z);
    printf("%d\n", z); //5
    printf("%d\n", somma(1,3));
    printf("%d\n", somma(-6,101));
    global++;

    printf("Global: %d", global);

}

