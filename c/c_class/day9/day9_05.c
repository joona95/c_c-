#include <stdio.h>
struct student
{
    char no[10];
    char name[20];
    double total;
};

int main()
{
    struct student stu[3];
    int i=0;

    for(i=0;i<3;i++)
    {
        printf("�й� �̸� ���� ������ �Է��ϼ��� : ");
        scanf("%s %s %lf", &stu[i].no, &stu[i].name, &stu[i].total);
    }
    printf("\n");

    printf("�л� ������ ����մϴ�. \n");
    for(i=0;i<3;i++)
    {
        printf("%s %s %lf", stu[i].no, stu[i].name, stu[i].total);
        printf("\n");
    }

    return 0;
}





/*
struct employee
{
    char no[10];  //���
    char name[20];
    int age;
};


int main()
{
    struct employee e[3]={
    {"201811", "������", 36},
    {"201812", "ȫ����", 33},
    {"201813", "����", 27}
    };

    int i;
    for(i=0;i<3;i++)
        printf("��� : %s, �̸� : %s, ���� : %d \n", e[i].no, e[i].name, e[i].age);

    return 0;
}
*/
