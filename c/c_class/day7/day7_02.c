#include <stdio.h>
void self_service();
int main()
{
    self_service();
    return 0;
}

void self_service()
{
    static int i=1;

    if(i>5)
        return;

    printf("���� ���� %dȸ \n", i);
    i=i+1;
    self_service();
}
