#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int com, you;
    srand(time(NULL));

    while(1)
    {
        com = rand()%3 + 1;

        printf("------가위바위보 게임------ \n");
        printf("1.가위  2.바위  3.보  선택, 종료(다른키) : ");
        scanf("%d", &you);

        if(you<1||you>3)
        {
            printf("종료.\n");
            break;
        }
        else
        {
            printf("컴퓨터 : %s \n", com==1 ? "가위" : (com==2 ? "바위" : "보") );
            printf("나 : %s \n", you==1 ? "가위" : (you==2 ? "바위" : "보"));

            if(com==you)
                printf("비겼습니다. \n");
            else if((com==1 && you==2) || (com==2 && com==3) || (com==3 && you==1))
                printf("이겼습니다. \n");
            else
                printf("졌습니다. \n");

        }


    }


    return 0;
}
