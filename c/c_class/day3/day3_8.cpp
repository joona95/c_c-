#include <stdio.h>
int main()
{
    /*
    printf("연산자 p129 연습1번 \n");
    int x, y, z;
    int result;

    printf("input x : ");
    scanf("%d", &x);
    printf("input y : ");
    scanf("%d", &y);
    printf("input z : ");
    scanf("%d", &z);

    result = (x+y)*(x+z)/(y%z);

    printf("(x+y)*(x+z)/(y%%z) = %d", result);

    */


    int x, y;
    int result1, result2;

    printf("연산자 p129 연습2번 \n");
    printf("input : ");
    scanf("%d", &x);
    printf("input : ");
    scanf("%d", &y);

    result1 = (x>y) ? y : x;
    result2 = (x==y) ? printf("같음") : printf("Smaller Number : %d", result1);


    return 0;
}
