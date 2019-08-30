#include <stdio.h>
#include <windows.h>
int main()
{
    int i=0;
    while(1)
    {
        printf("반복 횟수 : %d \n", i);
        i++;
        Sleep(100); //1000 1초

        if(i ==100)
            break;
    }

    return 0;
}
