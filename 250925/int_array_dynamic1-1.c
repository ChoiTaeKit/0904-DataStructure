// int형 배열을 동적으로 생성 및 해제하는 프로그램
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int el_num;
    int nx; // 배열 x 요소 개수
    printf("배열의 요소 개수 : ");
    scanf("%d", &nx);
    
    int* x = calloc(nx, sizeof(int)); // 요소 개수가 nx인 int형 메모리 할당
    if (x == NULL) // 메모리 할당 실패 시
    {
        puts("메모리 할당 실패");
    }
    else{
        printf("초기화 상태 확인.\n");
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] = %d\n", i, x[i]);
        }
        printf("%d개의 정수를 입력하세요.\n", nx);
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        }
        printf("각 요솟값은 아래와 같습니다.\n");
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] = %d\n", i, x[i]);
        }
        
        free(x); // 요소 개수가 na인 int형 배열 해제
    }
    return 0;   
}