#include <stdio.h>
int main()
{
    int i;
    int fact = 1;

    for(i=1;i<=10;i++)
    {
        fact = fact*i;
    }
    printf("1���� 10������ �� = %d",fact);

    return 0;
}
