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
        printf("ÇĞ¹ø : ");
        scanf("%d", &stu[i].no);
        printf("Ç÷¾×Çü : ");
        scanf("%s", &stu[i].bl);
        printf("½Ã·Â(¿Ş) : ");
        scanf("%lf", &stu[i].eye1);
        printf("½Ã·Â(¿À) : ");
        scanf("%lf", &stu[i].eye2);
        printf("¸ö¹«°Ô : ");
        scanf("%d", &stu[i].kg);
    }
    printf("\n");

    for(i=0;i<3;i++)
    {
        printf("ÇĞ¹ø : %d, Ç÷¾×Çü : %s, ½Ã·Â(¿Ş) : %.1lf, ½Ã·Â(¿À) : %.1lf, ¸ö¹«°Ô : %d", stu[i].no, stu[i].bl, stu[i].eye1, stu[i].eye2, stu[i].kg);
        printf("\n");
    }

    return 0;
}
