#include <stdio.h>
int rabbit(int n);

int main()
{
    /*
    int arr[]={20,70,10,80,50};
    int rank[5]={0,};
    int sum=0, count=0;
    double average=0;
    int min=999;
    int i,j;

    for(i=0;i<5;i++)
    {
        sum += arr[i];
        count++;
        if(arr[i]<min)
        {
            min=arr[i];
        }

    }

    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(arr[i]<=arr[j])
                rank[i] = rank[i]+1;
        }
    }

    //count = i;
    average= (double)sum/count;

    printf("�հ�(sum) : %d \n", sum);
    printf("����(count) : %d \n",count);
    printf("���(average) : %.2lf \n",average);
    printf("�ּҰ�(min) : %d \n",min);
    printf("����(rank) : (%d, %d, %d, %d, %d) \n",rank[0],rank[1],rank[2],rank[3],rank[4]);
    */


    //6. �Ǻ���ġ ���� - ����Լ� ���
    int result;
    int i;

    for(i=1;i<=12;i++)
    {
        result = rabbit(i);
        printf("%-3d ",result);
    }

    return 0;
}


int rabbit(int n)
{
    if (n<=2)
        return 1;
    return rabbit(n-2)+rabbit(n-1);
}
