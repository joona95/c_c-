#include <stdio.h>
int main()
{
    int i;

    printf("1���� 100������ ¦���� ����ϼ���. \n");

    for(i=1;i<=100;i++)
    {
        if(i%2==1)
            continue;
        printf("%-3d",i);

    }


    /*
    int grade;

    printf("C��� ���� �Է� : ");
    scanf("%d", &grade);

    if(grade>=95)
        printf("A+ �Դϴ�. \n");
    else if(grade>=90)
        printf("A �Դϴ�. \n");
    else if(grade>=85)
        printf("B+ �Դϴ�. \n");
    else if(grade>=80)
        printf("B �Դϴ�. \n");
    else
        printf("F �Դϴ�. \n");
    */

    return 0;
}
