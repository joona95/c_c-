#include <stdio.h>
int main()
{
    int i;
    int fact = 1;

    for(i=1;i<=10;i++)
    {
        fact = fact*i;
    }
    printf("1부터 10까지의 곱 = %d",fact);

    return 0;
}
