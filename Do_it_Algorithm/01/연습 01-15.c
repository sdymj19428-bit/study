#include <stdio.h>

int main(void)
{
    int height, width;

    printf("직사각형을 출력합나다.\n");

    do {
        printf("높이 : ");
        scanf("%d", &height);
    } while(height <= 0);

    do {
        printf("너비 : ");
        scanf("%d", &width);
    }while (width <= 0);

    for(int i = 1; i <= height; i++) {
        for(int j = 1; j <= width; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}