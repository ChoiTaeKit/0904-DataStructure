// 읽어온 정수값의 판별
#include <stdio.h>

int main() {
    int n;

    printf("정수: ");
    scanf("%d", &n);

    if (n == 1)
        puts("A");
    else if (n == 2)
        puts("B");
    else if (n == 3) 
        puts("C");
    else
    ; //아무것도 실행하지 않는 else문 -- 일부러 이렇게 적어둠.
    
    return 0;
}