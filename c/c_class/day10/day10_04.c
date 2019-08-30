#include <stdio.h>
#include <stdlib.h>
int main()
{
    int arr_1[5];
    int *arr_2;
    arr_2 = (int*)malloc(sizeof(int)*5);
    int i;
    for(i=0;i<5;i++)
    {
        arr_1[i] = i+1;
        //printf("%d ", arr_1[i]);
    }

    for(i=0;i<5;i++)
    {
        arr_2[i] = arr_1[i];
        //printf("%d ",arr_2[i]);
    }

    realloc(arr_2, sizeof(int)*10);

    for(i=0;i<10;i++)
    {
        arr_2[i] = arr_1[i];
        printf("%d ",arr_2[i]);
    }

    return 0;
}
