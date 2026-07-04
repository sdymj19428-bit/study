#include <stdio.h>

int main(void)
{
    int num;

    printf("1부터 n까지의 총합을 구합니다.");

    do {
        printf("n값 : ");
        scanf("%d", &num);
    } while(num <= 0);

    int sum = 0;
    for(int i = 0; i<=num; i++) {
        sum += i;
    }

    printf("1부터 %d까지의 총합은 %d입니다.\n", num, sum);

    return 0;
}