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

    if(i>5)        //�Լ��� ���� �ݺ� ������ �ذ��ϴ� ����
        return;    //���� ��ȯ���� �ʰ� �׳� �Լ��� ����

    printf("���� ���� %dȸ \n", i);
    i=i+1;
    self_service();
}
