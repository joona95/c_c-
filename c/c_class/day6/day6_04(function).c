#include <stdio.h>

void count()
{
    int x = 0;
    static int y = 0;  //정적 변수

    x = x+1;
    y = y+1;

    printf("x 값 : %d, y 값 : %d\n",x,y);
}

int main()
{

    /*지역 변수
    int i=0;
    int total =0;

    for(i=1;i<3;i++)
    {
        //int total =0;  //에러 발생
        total = total+i;
    }

    if(total<10)
    {
        printf("total 값은 %d입니다. \n",total);
    }
    */

    count();
    count();
    count();

    return 0;
}


//지역변수, 전역변수, 정적변수
