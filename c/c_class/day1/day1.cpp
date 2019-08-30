#include <stdio.h>

int main()
{
    int a;

    printf("점수 입력: ");
    scanf("%d", &a);

    if(a>=90)
    {
        printf("입력한 점수는 A학점 입니다.\n");
    }
    else if(a>=80) //80<=a<=89 : (a>=80)&&(a<=89)
    {
        printf("입력한 숫자는 B학점 입니다.\n");
    }
    else if(a>=70)
    {
        printf("입력한 숫자는 C학점 입니다.\n");
    }
    else if(a>=60)
    {
        printf("입력한 숫자는 D학점 입니다.\n");
    }
    else
    {
        printf("입력한 숫자는 F학점 입니다.\n");
    }
}
