#include <stdio.h>

int main(void) 
{
    int num;
    scanf("%d", &num);

    if(num >= 0) {
        printf("plus\n");
    }
    else {
        printf("minus\n");
    }

    if(num % 2 == 0) {
        printf("even\n");
    }
    else {
        printf("odd\n");
    }

    return 0;
}