#include <stdio.h>
int main()
{
    int n;
    int i=0;
    int sum=0;

    printf("input : ");
    scanf("%d", &n);

    while( i<n )
    {
        i++;
        printf("%-2d", i);
        sum = sum + i;

    }
    printf("\n");
    printf("1���� %d������ ���� %d", n, sum);

    return 0;
}
