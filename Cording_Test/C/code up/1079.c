#include <stdio.h>

int main(void)
{
    char keyword;
    while(keyword != 'q') {
        scanf("%c ", &keyword);
        if(keyword == 'q') {
            printf("%c\n", keyword);
            break;
        }
        printf("%c\n", keyword);
    }

    return 0;
}