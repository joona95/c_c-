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

        printf("------���������� ����------ \n");
        printf("1.����  2.����  3.��  ����, ����(�ٸ�Ű) : ");
        scanf("%d", &you);

        if(you<1||you>3)
        {
            printf("����.\n");
            break;
        }
        else
        {
            printf("��ǻ�� : %s \n", com==1 ? "����" : (com==2 ? "����" : "��") );
            printf("�� : %s \n", you==1 ? "����" : (you==2 ? "����" : "��"));

            if(com==you)
                printf("�����ϴ�. \n");
            else if((com==1 && you==2) || (com==2 && com==3) || (com==3 && you==1))
                printf("�̰���ϴ�. \n");
            else
                printf("�����ϴ�. \n");

        }


    }


    return 0;
}
