#include <stdio.h>
struct student
{
    int no;
    char bl[2];
    double eye1, eye2;
    int kg;
};

int main()
{
    struct student stu[3];
    int i;


    for(i=0;i<3;i++)
    {
        printf("�й� : ");
        scanf("%d", &stu[i].no);
        printf("������ : ");
        scanf("%s", &stu[i].bl);
        printf("�÷�(��) : ");
        scanf("%lf", &stu[i].eye1);
        printf("�÷�(��) : ");
        scanf("%lf", &stu[i].eye2);
        printf("������ : ");
        scanf("%d", &stu[i].kg);
    }
    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("�й� : %d, ������ : %s, �÷�(��) : %.1lf, �÷�(��) : %.1lf, ������ : %d", stu[i].no, stu[i].bl, stu[i].eye1, stu[i].eye2, stu[i].kg);
        printf("\n");
    }

    return 0;
}
