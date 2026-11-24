#include<stdio.h>
#define N 5

int main(void) {
    char arr[N] = {'c','i','a','o','\0'};

    arr[0] = 'a';
    arr[1] = 'b';
    arr[2] = 'c';
    //arr[3] = '\0';

    

    printf("%s\n", arr);

    for(int i=0; i<N; i++) {
        //printf("%c", arr[i]);
        if(arr[i]==0)
            break;
        putchar(arr[i]); //putchar(*(arr+i));
    }
    printf("\n");

    char *p = arr;
    while(*p != '\0') {
        putchar(*p);
        p++;
    }

    printf("\n");

    char *str = "Hello";

    char *q = str;

    str = "abc";

    printf("%zu\n", sizeof(str));

    printf("%s %s\n",q, str);

    char *k = str+2;
    printf("%s\n",k);
}