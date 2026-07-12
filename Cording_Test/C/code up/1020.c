#include <stdio.h>

int main(void)
{
    int f_num, b_num;
    scanf("%d-%d", &f_num, &b_num);

    printf("%06d%06d", f_num, b_num);

    return 0;
}