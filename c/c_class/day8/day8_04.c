#include <stdio.h>
void SwapByVal(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
//왜 안되는거지? 공부하고도 모르겠으면 질문하자

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
    p= &a;  //포인터 변수 p에 a의 주소를 대입
    y = *p;

    printf("변수 a의 값은 %d \n",y);
    */

    return 0;
}
