#include <stdio.h>
int main()
{
    int a, i;

    printf("�Է�(���� ����) : ");
    scanf("%d", &a);

    printf("%d�� ��� : ",a);
    for(i=1;a*i<=100;i++)
    {
        printf("%-3d", a*i);
    }
    printf("\n");
    printf("%d�� ��� ���� : %d \n",a, i-1);


    return 0;
}
