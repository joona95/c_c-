#include <stdio.h>
int main()
{
    int array[]={1, 3, 7, 10};
    int i;
    int sum=0;
    for(i=0;i<4;i++)
    {
        printf("array[%d]의 값은 %d \n",i,array[i]);
        sum = sum+array[i];
    }
    printf("배열의 합 : %d \n",sum);

    return 0;
}
