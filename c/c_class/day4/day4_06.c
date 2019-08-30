#include <stdio.h>
int main()
{

    int dan;
    int j;

    for(dan=2; dan<10; dan++)
    {
        for(j=1; j<10; j++)
        {
            printf("%d x %d = %d\n",dan,j,dan*j);
        }
    }




/*
    int i;
    int j;

    while(1)
    {
        j=1;
        printf("구구단 몇 단? ");
        scanf("%d", &i);
        if (i!=0)
        {
             while(j<=9)
            {
                printf("%d x %d = %d\n",i,j,i*j);
                j++;
            }
        }
        else
            break;

    }
*/



    /*
    while(i<=9)
    {
        j=1;
        while(j<=9)
        {
            printf("%d x %d = %d \n", i, j, i*j);
            j++;
        }
        i++;
        //j=1;
        printf("===========================\n");
    }
*/


    /*
    int i=1;

    while(i<=9)
    {
        printf("2 x %d = %d \n",i,2*i);
        i++;
    }
*/
    return 0;
}
