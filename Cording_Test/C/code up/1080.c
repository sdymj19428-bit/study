#include <stdio.h>

int main(void)
{
    int num, i;
    int sum = 0;
    scanf("%d", &num);

    for(i = 1; i <= num; i++) {
        sum += i;
        if(sum >= num) {
            break;
        }
    }
    printf("%d\n", i);

    return 0;
}