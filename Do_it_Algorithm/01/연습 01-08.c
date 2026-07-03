#include <stdio.h>

int main(void)
{
    int num;
    printf("1부터 n까지의 합을 구하세요.");

    printf("n값 : ");
    scanf("%d", &num);

    int sum = (1+ num)*(num/2) + (num % 2  == 1 ? (1+num)/2 : 0);

    printf("1부터 %d까지의 합은 %d입니다.\n", num, sum);

    return 0;
}