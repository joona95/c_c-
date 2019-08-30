#include <stdio.h>
int main()
{
    FILE* stream1;
    FILE* stream2;
    int input = 0;
    int num;

    printf("정수 입력 : ");
    fscanf(stdin, "%d", &num);

    stream1 = fopen("data1.txt","r");
    stream2 = fopen("data2.txt","w");

    puts("파일로부터 데이터를 입력");
    while(input != EOF)
    {
        input = fgetc(stream1);
        fputc(input, stream2);  //data2에 출력
        fputc(input, stdout);  //모니터에 출력
    }

    fprintf(stream2, "%d \n", num);
    fprintf(stdout, "%d \n", num);


    fclose(stream1);
    fclose(stream2);

    return 0;
}
