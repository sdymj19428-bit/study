#include <stdio.h>

int main(void)
{
    char word;
    scanf("%c", &word);

    for(int i = 97; i <= word; i++) {
        printf("%1c\n", i);
    }

    return 0;
}