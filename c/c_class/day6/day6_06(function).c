/*266�� �������� 1��
#include <stdio.h>
int abs(int x);

int main()
{
    int num;
    int result;
    printf("������ �Է��ϼ��� : ");
    scanf("%d", &num);
    result = abs(num);
    printf("������ : %d�Դϴ�.\n", result);

    return 0;
}

int abs(int x)
{
    if (x<0)
        return -x;
    else
        return x;
}
*/

/*�������� 3��
#include <stdio.h>
int plus(int x, int y);
int minus(int x, int y);
int multiply(int x,int y);
float divide(int x, int y);

int main()
{
    int a,b;
    int result;
    double result2;
    printf("input two numbers : ");
    scanf("%d %d",&a,&b);
    result=plus(a,b);
    printf("a + b = %d \n",result);
    result=minus(a,b);
    printf("a - b = %d \n",result);
    result=multiply(a,b);
    printf("a * b = %d \n",result);
    result2=divide(a,b);
    printf("a / b = %lf \n",result2);

    return 0;
}

int plus(int x, int y)
{
    return x+y;
}

int minus(int x, int y)
{
    return x-y;
}

int multiply(int x,int y)
{
    return x*y;
}

float divide(int x, int y)
{
    return (float)x/y;
}
*/


//�������� 4��
#include <stdio.h>
int getArea(int x, int y);

int main()
{
    int a,b;
    int result;

    printf("�غ� ���� : ");
    scanf("%d", &a);
    printf("���� : ");
    scanf("%d", &b);
    result = getArea(a,b);
    printf("�簢���� ���̴� %d�Դϴ�. \n",result);

    return 0;
}

int getArea(int x, int y)
{
    return x*y;
}

