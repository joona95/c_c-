#include <stdio.h>
int main()
{
    /*chap01 ����3��
    int arr[3][5] = {
        {90, 78, 77, 98, 98},
        {80, 45, 67, 88, 57},
        {88, 99, 65, 55, 74}
    };
    int sum_r;
    int sum_c[5]={0,0,0,0,0};
    int total=0;
    int i,j;

    for(i=0;i<3;i++)
    {
        sum_r = 0;
        for(j=0;j<5;j++)
        {
            printf("%4d ",arr[i][j]);
            sum_r += arr[i][j];
            sum_c[j] += arr[i][j];
        }
        printf("|%4d \n",sum_r);
    }
    for(j=0;j<5;j++)
    {
        printf("%4d ",sum_c[j]);
        total += sum_c[j];
    }
    printf("|%4d",total);
    */

    /*chap02 ����2��
    int arr[3][3];
    int total = 0;
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d�� %dȣ�� ������ �� ���Դϱ�? : ",i+1,j+1);
            scanf("%d", &arr[i][j]);
            total += arr[i][j];
        }
    }

    printf("��������Ʈ �� �ֹμ��� %d���Դϴ�. \n",total);
    */


    int arr[9][9];
    int i,j;

    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            arr[i][j] = (i+1)*(j+1);
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
