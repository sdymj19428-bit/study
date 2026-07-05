#include <stdio.h>

int main(void)
{
    char word;
    scanf("%c", &word);

    int n_word = (int)word + 1;

    printf("%c", n_word);

    return 0;
}