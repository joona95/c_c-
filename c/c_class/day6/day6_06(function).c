/*266쪽 연습문제 1번
#include <stdio.h>
int abs(int x);

int main()
{
    int num;
    int result;
    printf("정수를 입력하세요 : ");
    scanf("%d", &num);
    result = abs(num);
    printf("절댓값은 : %d입니다.\n", result);

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

/*연습문제 3번
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


//연습문제 4번
#include <stdio.h>
int getArea(int x, int y);

int main()
{
    int a,b;
    int result;

    printf("밑변 길이 : ");
    scanf("%d", &a);
    printf("높이 : ");
    scanf("%d", &b);
    result = getArea(a,b);
    printf("사각형의 넓이는 %d입니다. \n",result);

    return 0;
}

int getArea(int x, int y)
{
    return x*y;
}

