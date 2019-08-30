#include <stdio.h>
//void insa(int n);
int factorial(int n);
int main()
{
    //insa(5);
    int a;
    int result;

    printf("정수 입력 : ");
    scanf("%d", &a);

    result = factorial(a);
    printf("%d 팩토리얼은 : %d 입니다. \n",a, result);

    return 0;
}

void insa(int n)
{
    //1x2x3x...10
    /*
    int i;
    int gob=1;

    for(i=1;i<11;i++)
    {
        gob = gob*i;
    }
    printf("%d", gob);
    */

    /*
    printf("Hello \n");
    n=n-1; //n--
    if(n>0)
        insa(n);
    */
}

int factorial(int n)
{
    if(n<=1)    //종료조건
        return 1;
    else
        return n*factorial(n-1);
}
