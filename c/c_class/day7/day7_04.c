#include <stdio.h>
#include <strings.h>
int main()
{
    //변수와 배열의 차이점
    /*
    int arr[3];
    int i;
    for(i=0;i<3;i++)
    {
        printf("정수를 입력하세요 : ");
        scanf("%d", &arr[i]);
    }

    //출력
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
    //문자열 배열
    char array[]="ABC";
    //char array2[] = "I love you";
    //char arr[4]={'A', 'B','C','\0'};
    int len;
    len = strlen(array);
    printf("글자수는 %d \n", len);
    //printf("%c \n", array[2]);
    //printf("%s",array);
    //printf("%s", array2);
    */

    char a[]="NET";
    char b[4]; //TEN을 넣을 배열
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

    printf("%s는 거꾸로 읽으면 %s입니다.",a,b);
    return 0;
}
