#include <stdio.h>
void self_service();

int main()
{
    self_service();
    return 0;
}

void self_service()
{
    static int i=1; //int i = 1;

    if(i>5)        //함수의 무한 반복 문제를 해결하는 조건
        return;    //값을 반환하지 않고 그냥 함수를 종료

    printf("셀프 서비스 %d회 \n", i);
    i=i+1;
    self_service();
}
