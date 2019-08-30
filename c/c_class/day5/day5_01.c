#include <stdio.h>
int main()
{
    int i;
    int sum=0;

    for(i=1;i<=10;i++)
    {
        sum=sum+i;
        //printf("i = %d, sum = %d \n",i,sum);
    }

    printf("i=%d, sum=%d\n",i-1,sum);

    return 0;
}
