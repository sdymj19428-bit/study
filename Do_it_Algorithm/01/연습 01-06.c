#include <stdio.h>

int main(void)
{
    int n;

    puts("1부터 n까지 총합을 구하세요.");

    printf("n값 : ");
    scanf("%d", &n);

    int sum = 0;
    int i = 1;

    while(i <= n) {
        sum += i;
        i++;
    }

    printf("1부터 %d까지 합은 %d입니다.\n", n, sum);

    printf("변수 i값은 %d이고, n+1과 %s.\n", i, (i == n+1) ? "같습니다" : "같지 않습니다");

    return 0;
}