#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    srand(time(NULL)); //1970�� 1�� 1�� ������ �ð��� ��ȯ
    int com; //��ǻ��
    int guess; //���
    com = rand()%30;

    for(;;)
    {
        printf("����������? ");
        scanf("%d", &guess);

        if(com<guess)
            printf("�ʹ� Ŀ��!! \n");
        else if (com>guess)
            printf("�ʹ� �۾ƿ�!! \n");
        else
        {
            printf("����!! \n");
            break;
        }

    }


    return 0;
}
