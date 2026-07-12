#include <stdio.h>

int main(void)
{
    int hour, min;
    char icon;

    scanf("%d %c %d", &hour, &icon, &min);

    printf("%d%c%d", hour, icon, min);

    return 0;
}