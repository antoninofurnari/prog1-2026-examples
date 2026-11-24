#include<stdio.h>
#include<ctype.h>

int main(void) {
    char c='5';

    switch(tolower(c)) {
        case 'a':
            printf("Hai scritto a");
            break;
        case 'b':
            printf("Hai scritto b");
            break;
        default:
            if(isdigit(c))
                printf("Hai scritto un numero");                

    }
}