//ASCII
#include <stdio.h>
int main()
{
    int x,y;  //행렬의 반복변수
    char c;  //문자번호

    for(y=2; y<8; y++)
        printf("16: 10:C | "); //제목행 표시
    printf("\n");
    for(y=2;y<8;y++)
        printf("---------+-");
    printf("\b \n");

    for(x=0;x<16;x++)
    {
        for(y=2;y<8;y++)
        {
            c = y * 16 + x;  //10진수 32부터 시작 처리문
            printf("%x:%3d:%c | ",c,c,c);
        }
        printf("\n");
    }

    return 0;
}
