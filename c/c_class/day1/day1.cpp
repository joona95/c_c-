#include <stdio.h>

int main()
{
    int a;

    printf("���� �Է�: ");
    scanf("%d", &a);

    if(a>=90)
    {
        printf("�Է��� ������ A���� �Դϴ�.\n");
    }
    else if(a>=80) //80<=a<=89 : (a>=80)&&(a<=89)
    {
        printf("�Է��� ���ڴ� B���� �Դϴ�.\n");
    }
    else if(a>=70)
    {
        printf("�Է��� ���ڴ� C���� �Դϴ�.\n");
    }
    else if(a>=60)
    {
        printf("�Է��� ���ڴ� D���� �Դϴ�.\n");
    }
    else
    {
        printf("�Է��� ���ڴ� F���� �Դϴ�.\n");
    }
}
