#include <stdio.h>
int main()
{
    int array[]={1, 3, 7, 10};
    int i;
    int sum=0;
    for(i=0;i<4;i++)
    {
        printf("array[%d]�� ���� %d \n",i,array[i]);
        sum = sum+array[i];
    }
    printf("�迭�� �� : %d \n",sum);

    return 0;
}
