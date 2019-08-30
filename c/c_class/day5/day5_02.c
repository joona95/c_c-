#include <stdio.h>
int main()
{
    //구구단
    int dan;
    int a;

    for(dan=2;dan<10;dan++)
    {
        for(a=1;a<10;a++)
        {
            printf("%d x %d = %d\n",dan,a,dan*a);
        }
        printf("============================\n");
    }

    /*int a,i;

    printf("단을 입력받아서 구구단 만들기\n");
    printf("단을 입력하세요 : ");
    scanf("%d", &a);

    for(i=1;i<10;i=i+2)
    {
        printf("%d x %d = %d \n",a,i,a*i);
    }
    */

    return 0;
}
