#include <stdio.h>
int main()
{
    FILE* stream1;
    FILE* stream2;
    int input = 0;
    int num;

    printf("���� �Է� : ");
    fscanf(stdin, "%d", &num);

    stream1 = fopen("data1.txt","r");
    stream2 = fopen("data2.txt","w");

    puts("���Ϸκ��� �����͸� �Է�");
    while(input != EOF)
    {
        input = fgetc(stream1);
        fputc(input, stream2);  //data2�� ���
        fputc(input, stdout);  //����Ϳ� ���
    }

    fprintf(stream2, "%d \n", num);
    fprintf(stdout, "%d \n", num);


    fclose(stream1);
    fclose(stream2);

    return 0;
}
