#include <stdio.h>

int main(void) {
    int n;
    puts("1부터 n까지의 총합을 구합니다.");
    printf("n값: ");
    scanf("%d", &n);

    int sum1 = 0; // 총 합
    int sum2 = 0; // 총 합
    int sum3 = 0; // 총 합
    
    //while
    int i = 1;
    while (i <= n) {// i가 n 이하이면 반복
        sum1 += i;   // sum1에 i값을 더함
        i++;        // i값을 1 증가
    }

    //for
    for (int j = 1; j <= n; j++) { // j = 1,2,..., n
        sum2 += j; // sum2에 j값을 더함
    }

    // 가우스의 덧셈 알고리즘
    sum3 = n * (n + 1) / 2;

    printf("while - 1부터 %d까지의 총합은 %d입니다.\n", n, sum1);
    printf("for - 1부터 %d까지의 총합은 %d입니다.\n", n, sum2);
    printf("가우스의 덧셈 알고리즘 - 1부터 %d까지의 총합은 %d입니다.\n", n, sum3);

    return 0;
}