#include <stdio.h>

void in_out(int count);

int main(void)
{
    int n;
    scanf("%d", &n);
    in_out(n);

    return 0;
}

void in_out(int count)
{
    int n, num;
    if(count == 0) {
        return;
    }
    scanf("%d", &num);
    printf("%d\n", num);
    in_out(count - 1);
}