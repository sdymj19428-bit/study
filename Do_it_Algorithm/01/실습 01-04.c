#include <stdio.h>

int main(void)
{
    int n;
    printf("정수 : ");
    scanf("%d", &n);

    if(n == 1) {
        printf("A");
    }

    else if (n == 2){
        printf("B");
    }

    else {
        printf("C");
    }

    return 0;
}