#include <stdio.h>
#include <string.h>

int main()
{
    char s[] = "I love cat.";
    char c = 'c';
    char *pt = NULL;

    printf("���ڿ� %s �ȿ� ���� %c", s,c);
    pt = strchr(s,c);
    if(!pt) //pt == NULL
        printf("�� �����ϴ�. \n");
    else
        printf("�� ã�ҽ��ϴ�. \n");



    /*
    int arr[4][3] = {
        {1,3,5},
        {2,4,6},
        {3,6,9},
        {123,234,345}
    };

    int i;
    int row, *pt;

    printf("�� ��ȣ�� �Է��ϼ��� : ");
    scanf("%d", &row);
    pt = arr[row-1];

    for(i=0;i<3;i++)
        printf("%d\t", *(pt+i));
    */


    /*p223 3��
    int grade;
    printf("������ �Է��ϼ��� : ");
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
