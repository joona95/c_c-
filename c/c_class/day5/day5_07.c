#include <stdio.h>
int main()
{
    /*
    int a,b;


    printf("�� ���� ������ �Է��ϼ��� : ");
    scanf("%d %d", &a, &b);

    if(a>b)
        printf("ū ���� %d�Դϴ�.", a);
    else if(a<b)
        printf("ū ���� %d�Դϴ�.", b);
    else
        printf("�� ���� �����ϴ�.");
*/

    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            continue;
        else
            printf("%-3d",i);
    }


    return 0;
}
