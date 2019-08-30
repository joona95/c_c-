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
        printf("학번 이름 총점 순으로 입력하세요 : ");
        scanf("%s %s %lf", &stu[i].no, &stu[i].name, &stu[i].total);
    }
    printf("\n");

    printf("학생 정보를 출력합니다. \n");
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
    char no[10];  //사범
    char name[20];
    int age;
};


int main()
{
    struct employee e[3]={
    {"201811", "강동원", 36},
    {"201812", "홍진영", 33},
    {"201813", "서현", 27}
    };

    int i;
    for(i=0;i<3;i++)
        printf("사번 : %s, 이름 : %s, 나이 : %d \n", e[i].no, e[i].name, e[i].age);

    return 0;
}
*/
