#include <stdio.h>
int main()
{
    /*
    printf("������ p129 ����1�� \n");
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

    printf("������ p129 ����2�� \n");
    printf("input : ");
    scanf("%d", &x);
    printf("input : ");
    scanf("%d", &y);

    result1 = (x>y) ? y : x;
    result2 = (x==y) ? printf("����") : printf("Smaller Number : %d", result1);


    return 0;
}
