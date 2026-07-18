#include <stdio.h>

void zero_finder(void)
{
    int num;
    scanf("%d", &num);

    if(num == 0) {
        return;
    }
    printf("%d\n", num);
    zero_finder();
}

int main()
{
    zero_finder();

    return 0;
}