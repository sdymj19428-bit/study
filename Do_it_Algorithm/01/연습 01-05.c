#include <stdio.h>

//a, b, c의 중앙값 반환
int mid(int a, int b, int c)
{
    if((b >= a && c <= a) || (b <= a && c >= a))
    {
        return a;
    }
    else if((a > b && c < b) || (a < b && c > b))
    {
        return b;
    }
    
    return c;
}

int main(void)
{
    printf("mid(%d, %d, %d) = %d\n", 3, 2, 1, mid(3, 2, 1));
    printf("mid(%d, %d, %d) = %d\n", 3, 2, 2, mid(3, 2, 2));
    printf("mid(%d, %d, %d) = %d\n", 3, 1, 2, mid(3, 1, 2));
    printf("mid(%d, %d, %d) = %d\n", 3, 2, 3, mid(3, 2, 3));
    printf("mid(%d, %d, %d) = %d\n", 2, 1, 3, mid(2, 1, 3));
    printf("mid(%d, %d, %d) = %d\n", 3, 3, 2, mid(3, 3, 2));
    printf("mid(%d, %d, %d) = %d\n", 3, 3, 3, mid(3, 3, 3));
    printf("mid(%d, %d, %d) = %d\n", 2, 2, 3, mid(2, 2, 3));
    printf("mid(%d, %d, %d) = %d\n", 2, 3, 1, mid(2, 3, 1));
    printf("mid(%d, %d, %d) = %d\n", 2, 3, 2, mid(2, 3, 2));
    printf("mid(%d, %d, %d) = %d\n", 1, 3, 2, mid(1, 3, 2));
    printf("mid(%d, %d, %d) = %d\n", 2, 3, 3, mid(2, 3, 3));
    printf("mid(%d, %d, %d) = %d\n", 1, 2, 3, mid(1, 2, 3));

    return 0;
}