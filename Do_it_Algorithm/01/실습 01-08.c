#include <stdio.h>

int main(void)
{
    int n;
    printf("1부터 n까지의 총합을 구합니다.\n");
    printf("%n값 : ");

    scanf("%d", &n);

    int sum = 0;
    for(int i = 0; i <= n; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 총합은 %d입니다.\n", n, sum);

    return 0;
}