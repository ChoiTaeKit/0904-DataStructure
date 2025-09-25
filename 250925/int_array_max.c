// int형 배열을 동적으로 생성 및 해제하는 프로그램
#include <stdio.h>
#include <stdlib.h>

/* 요소 개수가 n인 배열 a의 요소의 최댓값 */
int maxof(const int a[], int elem_cnt){
    int max = a[0];
    for (int i = 1; i < elem_cnt; i++)
    {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int main(void){
    int num;    // 인원 수 = 배열 height의 요소 개수
    printf("사람 수 : ");
    scanf("%d", &num);
    int* height = calloc(num, sizeof(int)); // 요소 개수 num 개인 배열 생성
    printf("%d명의 키를 입력하세요.\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("최댓값은 %d입니다.\n", maxof(height, num));
    free(height);   // 배열 height 해제
    return 0;
}