// 읽어온 정수값의 양수, 음수, 0 판별 (3항 연산자 활용)
#include <stdio.h>
// #include <string.h>

int main() {
    int n;
    // char *foo;

    printf("정수: ");
    scanf("%d", &n);

    (n>0) ? printf("양수입니다.\n") : printf("음수입니다.\n");
    
    // foo = (n>0) ? "양수입니다.\n" : "음수입니다.\n";
    // printf("%c", foo);
    return 0;
}