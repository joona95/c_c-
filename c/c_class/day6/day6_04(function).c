#include <stdio.h>

void count()
{
    int x = 0;
    static int y = 0;  //���� ����

    x = x+1;
    y = y+1;

    printf("x �� : %d, y �� : %d\n",x,y);
}

int main()
{

    /*���� ����
    int i=0;
    int total =0;

    for(i=1;i<3;i++)
    {
        //int total =0;  //���� �߻�
        total = total+i;
    }

    if(total<10)
    {
        printf("total ���� %d�Դϴ�. \n",total);
    }
    */

    count();
    count();
    count();

    return 0;
}


//��������, ��������, ��������
