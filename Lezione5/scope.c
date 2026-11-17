#include<stdio.h>

int global = 10;

int main(void){

    int global = -5;

    int x = 5;
    int y;
    if (x>0) {
        printf("[dentro] x=%d\n",x);
        y = 5;
        global++;
    }

    printf("[fuori] y=%d\n",y);

    int i;
    for(i=0; i<10; i++) {
        printf("[fuori dal for] %d\n",y);
        int y_ = i+1;
        printf("[dentro il for] %d\n",y_);
        global++;
    }

    printf("%d\n",y);

    printf("%d\n",i);

    printf("global = %d",global);
}