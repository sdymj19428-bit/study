#include <stdio.h>

void triangleLB(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleLU(int n)
{
    for(int i = n; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRU(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        for(int j = 1; j <= n - i + 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}

void triangleRB(int n)
{
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n- i; j++) {
            printf(" ");
        }
        for(int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}

int main(void)
{
    int n;
    printf("직각 이등변 삼각형을 출력합니다.\n");

    do {
        printf("크기 : ");
        scanf("%d", &n);
    } while(n <= 0);

    printf("\n 왼쪽 아래가 직각 \n");
    triangleLB(n);

    printf("\n 왼쪽 위가 직각 \n");
    triangleLU(n);

    printf("\n 오른쪽 위가 직각 \n");
    triangleRU(n);

    printf("\n 오른쪽 아래가 직각 \n");
    triangleRB(n);

    return 0;
}