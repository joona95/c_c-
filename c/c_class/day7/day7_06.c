#include <stdio.h>

int main()
{
    /*����2��
    int arr[5];
    int i;
    int sum=0;
    double mean;

    for(i=0;i<5;i++)
    {
        printf("������ �Է��ϼ��� : ");
        scanf("%d", &arr[i]);
    }


    for(i=0;i<5;i++)
    {
        sum = sum+arr[i];
    }
    mean = sum / 5.0;

    printf("���� : %d, ��� : %.2lf",sum, mean);
    */


    //����3��
    int arr[15] = {90,78,77,98,98,
                    80,45,67,88,57,
                    88,99,65,55,74};
    int hsum[3]={0};
    int vsum[5]={0};
    int total=0;
    int i,j;


    for(i=0;i<15;i++)
    {
        hsum[i/5] = hsum[i/5]+arr[i];
        vsum[i%5] = vsum[i%5]+arr[i];
        total = total + arr[i];
    }

    /*
    for(i=0;i<3;i++)
    {
        for(j=0;j<5;j++)
        {
            hsum[i] += arr[i*5+j];
        }
    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<3;j++)
        {
            vsum[i] += arr[j*5+i];
        }
    }

    for(i=0;i<15;i++)
    {
        total += arr[i];
    }
    */

    printf("�������� ���� ���� ");
    for(i=0;i<3;i++)
        printf("%d ", hsum[i]);
    printf("\n�������� ���� ���� ");
    for(i=0;i<5;i++)
        printf("%d ", vsum[i]);
    printf("\n��� ���� ���� %d", total);


    return 0;
}

