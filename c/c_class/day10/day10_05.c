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
        printf("-------���� ������------\n");
        printf("�ո�(1), �޸�(2), ����(�ٸ� ��) : ");
        scanf("%d", &you);


        if(you<1 || you>2)
        {
            printf("����. \n");
            break;
        }
        else
        {
            if(com==1)
                printf("com : �ո� \n");
            else
                printf("com : �޸� \n");
            //printf("��ǻ�� :%s \n", com==1 ? "�ո�" : "�޸�");

            if(you==1)
                printf("�� : �ո� \n");
            else
                printf("�� : �޸� \n");
            //printf("�� : %s \n", you==1 ? "�ո�" : "�޸�");

            if(com==you)
            {
                printf("�¾���. \n");
                break;
            }
            else
                printf("���̳׿�. \n");
        }
    }

    return 0;
}
