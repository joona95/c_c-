#include <stdio.h>
#include <strings.h>
int main()
{
    //������ �迭�� ������
    /*
    int arr[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("������ �Է��ϼ��� : ");
        scanf("%d", &arr[i]);
    }

    //���
    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i]);
    }
    */

    /*
    int arr[]={1,3,7,10};
    printf("%d ", arr[0]);
    printf("%d ", arr[1]);
    printf("%d ", arr[2]);
    printf("%d ", arr[3]);
    */

    /*
    char array [3]={'A','B','C'};
    printf("%x %x %x \n", array+0, array+1,array+2);
    */

    /*
    //���ڿ� �迭
    char array[]="ABC";
    //char array2[] = "I love you";
    //char arr[4]={'A', 'B','C','\0'};
    int len;
    len = strlen(array);
    printf("���ڼ��� %d \n", len);
    //printf("%c \n", array[2]);
    //printf("%s",array);
    //printf("%s", array2);
    */

    char a[]="NET";
    char b[4]; //TEN�� ���� �迭
    int i=0;

    while(a[i] != '\0')
    {
        b[i] = a[2-i];
        i++;
    }

    b[3] = '\0';

    /*
    int i;
    for(i=0;i<3;i++)
        b[i]=a[2-i];
    */

    printf("%s�� �Ųٷ� ������ %s�Դϴ�.",a,b);
    return 0;
}
