#include <stdio.h>
int main()
{
    int a, b,c ;
    //int result;

    printf("input : ");
    scanf("%d", &a);
    printf("input : ");
    scanf("%d", &b);
    printf("input : ");
    scanf("%d", &c);

    //result = (a>b) ? ((b>c) ? a : ((a>c) ? a : c)) : ((a>c) ? b : ((b>c) ? b : c));
    // (a>b && a>c) ? printf("Max Number : %d", a) : (b>a && b>c) ? printf("Max Number : %d", b) : printf("Max Number : %d", c);

    //printf("Max Number : %d", result);

    if (a>b && a>c)
    {
        printf("Max Number : %d", a);
    }
    else if (b>c && b>a)
    {
        printf("Max Number : %d", b);
    }
    else
    {
        printf("Max Number : %d", c);
    }



    /* p129 2번 문제
    int a, b;

    printf("input : ");
    scanf("%d", &a);
    printf("input : ");
    scanf("%d", &b);

    (a==b) ? printf("같음") :
        (a<b) ? printf("Smaller Number : %d", a) : printf("Smaller Number : %d", b);

*/

    return 0;
}
