#include <stdio.h>
int main()
{
    int k,i,fact;
    fact = 1;

    printf("���丮�� ����� ���� �Է� : ");
    scanf("%d", &k);

    printf("%d! =", k);

    for(i=k;i>=1;i--)
    {
        fact = fact * i;
        printf(" %d x", i);
    }
    printf("\b = %d", fact);

}


