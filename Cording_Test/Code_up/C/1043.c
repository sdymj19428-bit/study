#include <stdio.h>

int main(void)
{
    int a, b;

    scanf("%d %d", &a, &b);

    int rem = a % b;

    printf("%d", rem);

    return 0;
}