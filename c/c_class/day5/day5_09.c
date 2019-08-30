#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); //1970년 1월 1일 이후의 시간을 반환
    int com; //컴퓨터
    int guess; //사람
    com = rand()%30;

    for(;;)
    {
        printf("맞혀보세요? ");
        scanf("%d", &guess);

        if(com<guess)
            printf("너무 커요!! \n");
        else if (com>guess)
            printf("너무 작아요!! \n");
        else
        {
            printf("정답!! \n");
            break;
        }

    }


    return 0;
}
