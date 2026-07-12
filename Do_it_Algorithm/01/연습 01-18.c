#include <stdio.h>

void nrpira(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i-1; j++) {
            printf(" ");
        }
        for(int j = 1; j <= (n - i) * 2 + 1; j++) {
            printf("%d", i % 10);
        }
        printf("\n");
    }
}

int main(void)
{
    int n;

    printf("피라미드를 출력합니다.\n");
    
    do {
        printf("단 수 :");
        scanf("%d", &n);
    } while(n <= 0);

    nrpira(n);

    return 0;
}