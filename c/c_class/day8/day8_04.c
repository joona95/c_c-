#include <stdio.h>
void SwapByVal(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
//�� �ȵǴ°���? �����ϰ� �𸣰����� ��������

void SwapByRef(int *x, int *y)
{
    int temp;
    temp = *x;
    *x=*y;
    *y = temp;
}

int main()
{
    /*
    int a=2, b=7;
    printf("a=%d, b=%d \n",a,b);
    SwapByVal(a,b);
    printf("a=%d, b=%d \n",a,b);
    SwapByRef(&a,&b);
    printf("a=%d, b=%d \n",a,b);
    /*


    /*
    char a=4, y;
    char *p;
    p= &a;  //������ ���� p�� a�� �ּҸ� ����
    y = *p;

    printf("���� a�� ���� %d \n",y);
    */

    return 0;
}
