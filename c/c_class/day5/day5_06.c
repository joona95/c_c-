#include <stdio.h>
int main()
{
    int i;

    printf("1부터 100까지의 짝수를 출력하세요. \n");

    for(i=1;i<=100;i++)
    {
        if(i%2==1)
            continue;
        printf("%-3d",i);

    }


    /*
    int grade;

    printf("C언어 성적 입력 : ");
    scanf("%d", &grade);

    if(grade>=95)
        printf("A+ 입니다. \n");
    else if(grade>=90)
        printf("A 입니다. \n");
    else if(grade>=85)
        printf("B+ 입니다. \n");
    else if(grade>=80)
        printf("B 입니다. \n");
    else
        printf("F 입니다. \n");
    */

    return 0;
}
