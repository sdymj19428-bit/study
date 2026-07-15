#include <stdio.h>

int main(void)
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int min = a > b ? b : a;

    int real_min = min > c ? c : min;

    printf("%d", real_min);

    return 0;
}