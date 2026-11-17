#include <stdio.h>

int main(void) {
    double a = 0.1 + 0.2;
    printf("%.1f\n",  a);  // stampa: 0.3  (sembra corretto...)
    printf("%.17f\n", a);  // stampa: 0.30000000000000004  (la verità!)
    return 0;
}