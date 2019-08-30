#include <stdio.h>
int main()
{
    int a, i;

    printf("입력(양의 정수) : ");
    scanf("%d", &a);

    printf("%d의 배수 : ",a);
    for(i=1;a*i<=100;i++)
    {
        printf("%-3d", a*i);
    }
    printf("\n");
    printf("%d의 배수 개수 : %d \n",a, i-1);


    return 0;
}
