//º°Âï±â
#include <stdio.h>
int main()
{
    int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++) //j=4-i;j<5;j++
        {
            printf("*");
        }
        printf("\n");
    }



    /*int i,j;

    for(i=0;i<5;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
*/

    return 0;
}
