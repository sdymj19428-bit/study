#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x = calloc(1, sizeof(int));  //int형 포인터에 메모리 할당

    if(x == NULL) {
        printf("메모리 할당에 실패했습니다.\n");
    }
    else {
        *x = 57;
        printf("*x = %d\n", *x);
        free(x);  //int형 포인터에 할당한 메모리 해제
    }

    return 0;
}