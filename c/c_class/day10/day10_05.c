#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int com, you;
    srand(time(NULL));

    while(1)
    {
        com = rand()%2+1;
        printf("-------동전 던지기------\n");
        printf("앞면(1), 뒷면(2), 종료(다른 값) : ");
        scanf("%d", &you);


        if(you<1 || you>2)
        {
            printf("종료. \n");
            break;
        }
        else
        {
            if(com==1)
                printf("com : 앞면 \n");
            else
                printf("com : 뒷면 \n");
            //printf("컴퓨터 :%s \n", com==1 ? "앞면" : "뒷면");

            if(you==1)
                printf("나 : 앞면 \n");
            else
                printf("나 : 뒷면 \n");
            //printf("나 : %s \n", you==1 ? "앞면" : "뒷면");

            if(com==you)
            {
                printf("맞았음. \n");
                break;
            }
            else
                printf("꽝이네요. \n");
        }
    }

    return 0;
}
