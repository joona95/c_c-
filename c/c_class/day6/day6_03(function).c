#include <stdio.h>

int addnum(int x, int y);
int minus(int x, int y);

int main()
{
    int result1, result2;

    result1 = addnum(3, 7);
    result2 = minus(3, 7);
    printf("�� ���� �� : %d \n",result1);
    printf("�� ���� �� : %d \n",result2);

    return 0;
}

int addnum(int x, int y)
{
    int k;
    k = x+y;
    return k;
}

int minus(int x, int y)
{
    int k;
    k=x-y;
    return k;
}
