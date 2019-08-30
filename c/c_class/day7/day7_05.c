#include <stdio.h>

int main()
{
    printf("오름차순 정렬 \n");
    int arr[]={25,76,15,88,54};
    int i, j; //이중 for 반복변수
    int temp; //임시변수

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if (arr[i] > arr[j])
            {
                temp=arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("arr[] = {");
    for(i=0;i<5;i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\b\b}");

    return 0;
}
