#include <stdio.h>
int main()
{
    FILE* stream;
    int file_state;
    int input = 0;
    stream = fopen("data1.txt","w");
    if(stream==NULL)
        puts("���� ���� ����");  //printf()

    puts("������ �Է�");
    while(input!=EOF)
    {
        input = fgetc(stdin);
        fputc(input, stream);
    }

    file_state = fclose(stream);
    if(file_state==EOF)
        puts("���� �ݱ� ����");

    return 0;
}
