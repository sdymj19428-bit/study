#include <stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);

    int form = a * (1 << b);

    printf("%d", form);

    return 0;
}