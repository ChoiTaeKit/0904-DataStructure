#include <stdio.h>

int main(void){
    int a[5] = {1, 2, 3, 4, 5}; //�迭 ����� ���ÿ� �ʱ�ȭ
    int na = sizeof(a) / sizeof(a[0]); //�迭 a�� ��� ����

    printf("�迭 a�� ��� ���� : %d\n", na);

    for(int i = 0; i < na; i++) // �� ����� ���� ���
        printf("a[%d] = %d\n", i, a[i]);

    return 0;
}