#include <stdio.h>  

void spira(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n-i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (i-1) * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void)
{
    int n;

    printf("피라미드를 출력합니다.\n");
    
    do {
        printf("단 수 : ");
        scanf("%d", &n);
    } while(n <= 0);

    spira(n);

    return 0;
}