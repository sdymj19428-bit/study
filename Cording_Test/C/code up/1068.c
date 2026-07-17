#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    if(num >= 90) {
        printf("A\n");
    }
    else if(num >= 70) {
        printf("B\n");
    }
    else if(num >= 40) {
        printf("C\n");
    }
    else {
        printf("D\n");
    }

    return 0;
}