#include <stdio.h>

int main(void) {
    int n;
    puts("1���� n������ ������ ���մϴ�.");
    printf("n��: ");
    scanf("%d", &n);

    int sum1 = 0; // �� ��
    int sum2 = 0; // �� ��
    int sum3 = 0; // �� ��
    
    //while
    int i = 1;
    while (i <= n) {// i�� n �����̸� �ݺ�
        sum1 += i;   // sum1�� i���� ����
        i++;        // i���� 1 ����
    }

    //for
    for (int j = 1; j <= n; j++) { // j = 1,2,..., n
        sum2 += j; // sum2�� j���� ����
    }

    // ���콺�� ���� �˰���
    sum3 = n * (n + 1) / 2;

    printf("while - 1���� %d������ ������ %d�Դϴ�.\n", n, sum1);
    printf("for - 1���� %d������ ������ %d�Դϴ�.\n", n, sum2);
    printf("���콺�� ���� �˰��� - 1���� %d������ ������ %d�Դϴ�.\n", n, sum3);

    return 0;
}