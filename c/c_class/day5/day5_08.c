#include <stdio.h>

int main()
{



    int n;
    printf("�� �� ����ġ�� �����ðڽ��ϱ�? ");
    scanf("%d", &n);

    switch(n)
    {
    case 1 :
        printf("������ ���� \n");
        break;
    case 2 :
        printf("������ ���� \n");
        break;
    case 3 :
        printf("���� \n");
        break;
    default :
        printf("����ġ ���� : ����ġ�� 1��~3�������� �ֽ��ϴ�. \n");

    }


    /*
    if(n==1)
        printf("������ ���� \n");
    else if(n==2)
        printf("������ ���� \n");
    else if(n==3)
        printf("���� \n");
    else
        printf("����ġ ���� : ����ġ�� 1��~3�������� �ֽ��ϴ�. \n");

    */

    return 0;
}
