#include <stdio.h>

int main(void){
    int a[5] = {1, 2, 3, 4, 5}; //배열 선언과 동시에 초기화
    int na = sizeof(a) / sizeof(a[0]); //배열 a의 요소 개수

    printf("배열 a의 요소 개수 : %d\n", na);

    for(int i = 0; i < na; i++) // 각 요소의 값을 출력
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}