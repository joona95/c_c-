#include <stdio.h>
int main()
{
    FILE* stream;
    int file_state;
    int input = 0;
    stream = fopen("data1.txt","w");
    if(stream==NULL)
        puts("파일 열기 에러");  //printf()

    puts("데이터 입력");
    while(input!=EOF)
    {
        input = fgetc(stdin);
        fputc(input, stream);
    }

    file_state = fclose(stream);
    if(file_state==EOF)
        puts("파일 닫기 에러");

    return 0;
}
