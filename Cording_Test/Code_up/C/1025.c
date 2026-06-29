#include <stdio.h>

int main(void)
{
    int num;
    scanf("%d", &num);

    int one, two, three, four, five;
    one = (num / 10000) * 10000;
    two = ((num - one) / 1000) * 1000;
    three = ((num - one - two) / 100) * 100;
    four = ((num - one - two - three) / 10) * 10;
    five = num - one - two - three - four;
    
    printf("[%d]\n[%d]\n[%d]\n[%d]\n[%d]\n", one, two, three, four, five);

    return 0;
}