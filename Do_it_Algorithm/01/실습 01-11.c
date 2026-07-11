#include <stdio.h>

int main(void)
{
    int num;
    do {
        printf("몇 단 삼각형 입니까?");
        scanf("%d", &num);
    } while (num <= 0);

    for(int i = 1; i <= num; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}