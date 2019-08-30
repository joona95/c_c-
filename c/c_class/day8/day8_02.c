#include <stdio.h>
int main()
{
    int num[3][4] ={
        {20, 40, 70, 50},
        {60, 20, 30, 40},
        {70, 60, 10, 80}
    };

    int sum_r;    //row(행)
    int sum_c[4]={0,0,0,0};   //column(열)
    int i,j;
    int total=0;

    for(i=0;i<3;i++)
    {
        sum_r=0;
        for(j=0;j<4;j++)
        {
            printf("%4d ", num[i][j]);
            sum_r += num[i][j];
            sum_c[j] += num[i][j];
        }
        printf("|%4d \n",sum_r);
    }
    for(j=0;j<4;j++)
    {
        printf("%4d ",sum_c[j]);
        total += sum_c[j];
    }
    printf("|%4d ",total);




    /*
    int arr[2][2];
    int i,j;

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("정수를 입력하세요 : ");
            scanf("%d", &arr[i][j]);
        }
    }

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
            printf("%3d", arr[i][j]);
        printf("\n");
    }
    */

    return 0;
}
