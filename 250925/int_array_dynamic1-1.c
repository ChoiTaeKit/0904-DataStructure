// int�� �迭�� �������� ���� �� �����ϴ� ���α׷�
#include <stdio.h>
#include <stdlib.h>

int main(void){
    int el_num;
    int nx; // �迭 x ��� ����
    printf("�迭�� ��� ���� : ");
    scanf("%d", &nx);
    
    int* x = calloc(nx, sizeof(int)); // ��� ������ nx�� int�� �޸� �Ҵ�
    if (x == NULL) // �޸� �Ҵ� ���� ��
    {
        puts("�޸� �Ҵ� ����");
    }
    else{
        printf("�ʱ�ȭ ���� Ȯ��.\n");
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] = %d\n", i, x[i]);
        }
        printf("%d���� ������ �Է��ϼ���.\n", nx);
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] : ", i);
            scanf("%d", &x[i]);
        }
        printf("�� ��ڰ��� �Ʒ��� �����ϴ�.\n");
        for (int i = 0; i < nx; i++)
        {
            printf("x[%d] = %d\n", i, x[i]);
        }
        
        free(x); // ��� ������ na�� int�� �迭 ����
    }
    return 0;   
}