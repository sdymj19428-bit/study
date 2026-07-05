#include <stdio.h>

int main(void)
{
    int num;

    do {
        printf("양의 정수 : ");
        scanf("%d", &num);
    } while (num <= 0);

    int digits = 0;
    while (num > 0) {
        num /= 10;
        digits++;
    }

    printf("그 수는 %d자리입니다.\n", digits);

    return 0;
}