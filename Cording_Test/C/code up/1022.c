#include <stdio.h>

int main(void)
{
    char str[2002];

    fgets(str, 2000, stdin);

    printf("%s\n", str);

    return 0;
}