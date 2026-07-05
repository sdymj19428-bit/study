#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("a값 : ");
    scanf("%d", &num1);

    while(1) {
        printf("b값 : ");
        scanf("%d", &num2);
        if(num2 > num1) {
            break;
        }

        printf("a보다 큰 값을 입력하세요\n");
    }

    printf("b - a는 %d입니다.\n", num2-num1);

    return 0;
}