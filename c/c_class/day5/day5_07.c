#include <stdio.h>
int main()
{
    /*
    int a,b;


    printf("두 개의 정수를 입력하세요 : ");
    scanf("%d %d", &a, &b);

    if(a>b)
        printf("큰 수는 %d입니다.", a);
    else if(a<b)
        printf("큰 수는 %d입니다.", b);
    else
        printf("두 수는 같습니다.");
*/

    int i;

    for(i=1;i<=100;i++)
    {
        if(i%2==0)
            continue;
        else
            printf("%-3d",i);
    }


    return 0;
}
