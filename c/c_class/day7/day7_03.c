#include <stdio.h>
int sum(int n);
int main()
{
    int i;
    for(i=1; i<=12; i++)
        printf("%d ",sum(i));
    return 0;
}

int sum(int n)
{
    if(n<=2)
        return 1;
    else
        return sum(n-2)+sum(n-1);
}

