#include <stdio.h>

int main()
{



    int n;
    printf("몇 번 스위치를 누르시겠습니까? ");
    scanf("%d", &n);

    switch(n)
    {
    case 1 :
        printf("전등이 켜짐 \n");
        break;
    case 2 :
        printf("전등이 꺼짐 \n");
        break;
    case 3 :
        printf("고장 \n");
        break;
    default :
        printf("스위치 오류 : 스위치는 1번~3번까지만 있습니다. \n");

    }


    /*
    if(n==1)
        printf("전등이 켜짐 \n");
    else if(n==2)
        printf("전등이 꺼짐 \n");
    else if(n==3)
        printf("고장 \n");
    else
        printf("스위치 오류 : 스위치는 1번~3번까지만 있습니다. \n");

    */

    return 0;
}
