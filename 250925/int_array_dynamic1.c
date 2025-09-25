#include <stdio.h>
#include <stdlib.h>

int main(void){
    int* x = calloc(1, sizeof(int)); // int형 1개를 저장할 수 있는 메모리 동적 할당
    if (x == NULL) // 메모리 할당 실패 시
    {
        puts("메모리 할당 실패");
    }
    else{
        *x = 57;
        printf("*x = %d\n", *x);
        free(x); // 동적 할당 해제
    }
    return 0;   
}