//ASCII
#include <stdio.h>
int main()
{
    int x,y;  //����� �ݺ�����
    char c;  //���ڹ�ȣ

    for(y=2; y<8; y++)
        printf("16: 10:C | "); //������ ǥ��
    printf("\n");
    for(y=2;y<8;y++)
        printf("---------+-");
    printf("\b \n");

    for(x=0;x<16;x++)
    {
        for(y=2;y<8;y++)
        {
            c = y * 16 + x;  //10���� 32���� ���� ó����
            printf("%x:%3d:%c | ",c,c,c);
        }
        printf("\n");
    }

    return 0;
}
