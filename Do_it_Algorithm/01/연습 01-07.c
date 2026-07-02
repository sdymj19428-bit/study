#include <stdio.h>

int main(void)
{
    int n;

    printf("1부터 n까지의 합을 구하세요.");

    printf("n값 : ");
    scanf("%d", &n);

    int sum = 0;

    for(int i = 1; i <= n; i++) {
        sum += i;
    }

    for(int i = 1; i < n; i++) {
        printf("%d + ", i);
    }

    printf("%d = %d\n", n, sum);

    return 0;
}