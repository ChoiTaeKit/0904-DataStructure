// �о�� �������� ���, ����, 0 �Ǻ�
#include <stdio.h>

int main() {
    int n;

    printf("����: ");
    scanf("%d", &n);

    if (n>0) {
        printf("����Դϴ�.\n");
    } else if (n<0) {
        printf("�����Դϴ�.\n");
    } else
        printf("0�Դϴ�.\n");
    return 0;
}