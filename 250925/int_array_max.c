// int�� �迭�� �������� ���� �� �����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>

/* ��� ������ n�� �迭 a�� ����� �ִ� */
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
    int num;    // �ο� �� = �迭 height�� ��� ����
    printf("��� �� : ");
    scanf("%d", &num);
    int* height = calloc(num, sizeof(int)); // ��� ���� num ���� �迭 ����
    printf("%d���� Ű�� �Է��ϼ���.\n", num);
    for (int i = 0; i < num; i++)
    {
        printf("height[%d] : ", i);
        scanf("%d", &height[i]);
    }
    printf("�ִ��� %d�Դϴ�.\n", maxof(height, num));
    free(height);   // �迭 height ����
    return 0;
}