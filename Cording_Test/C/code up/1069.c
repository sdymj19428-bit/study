#include <stdio.h>

int main(void)
{
    char word;
    scanf("%c", &word);

    if(word == 'A') {
        printf("best!!!\n");
    }
    else if(word == 'B') {
        printf("good!!\n");
    }
    else if(word == 'C') {
        printf("run!\n");
    }
    else if(word == 'D') {
        printf("slowly~\n");
    }
    else {
        printf("what?\n");
    }

    return 0;
}