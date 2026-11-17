#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    printf("INT_MAX  = %d\n",  INT_MAX);   // +2.147.483.647
    printf("INT_MIN  = %d\n",  INT_MIN);   // -2.147.483.648
    printf("UINT_MAX = %u\n",  UINT_MAX);  // +4.294.967.295
    printf("LONG_MAX = %ld\n", LONG_MAX);
    printf("DBL_MAX  = %e\n",  DBL_MAX);   // il più grande double positivo
    printf("DBL_MIN  = %e\n",  DBL_MIN);   // il più piccolo double positivo normalizzato
    return 0;
}