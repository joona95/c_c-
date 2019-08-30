#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "I love cat.";
    char c = 'c';
    char *pt = NULL;

    printf("문자열 %s 안에 문자 %c", s,c);
    pt = strchr(s,c);
    if(!pt) //pt == NULL
        printf("는 없습니다. \n");
    else
        printf("를 찾았습니다. \n");



    /*
    int arr[4][3] = {
        {1,3,5},
        {2,4,6},
        {3,6,9},
        {123,234,345}
    };

    int i;
    int row, *pt;

    printf("행 번호를 입력하세요 : ");
    scanf("%d", &row);
    pt = arr[row-1];

    for(i=0;i<3;i++)
        printf("%d\t", *(pt+i));
    */


    /*p223 3번
    int grade;
    printf("점수를 입력하세요 : ");
    scanf("%d", &grade);

    grade = grade/10;

    switch(grade)
    {
    case 10:
    case 9:
        printf("A \n");
        break;
    case 8:
        printf("B \n");
        break;
    default :
        printf("F \n");
    }
    */

    return 0;
}
