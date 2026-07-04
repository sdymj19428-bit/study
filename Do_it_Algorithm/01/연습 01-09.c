#include <stdio.h>

int sumof(int a, int b)
{
    int min, max;
    int sum = 0;

    if(a < b) {
        min = a;
        max = b;
    }
    else {
        min = b;
        max = a;
    }
    for(int i = min; i <= max; i++) {
        sum += i;
    }

    return sum;
}

int main(void)
{
    int a, b;

    printf("a값 : ");
    scanf("%d", &a);

    printf("b값 : ");
    scanf("%d", &b);

    printf("정수 a, b 사이의 모든 정수의 합은 %d 입니다.\n", sumof(a, b));

    return 0;
}