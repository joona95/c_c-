#include <stdio.h>
int main()
{
    /*
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d번째 학생의 점수 : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(i=0;i<5;i++)
        printf("%d ", arr[i]);
    /*

    /*
    int arr[] = {1, 3, 7, 14};
    //arr[0] =1;
    //arr[1] = 3;
    //arr[2] = 7;
    arr[3] = 15;

    printf("%d ", arr[3]);

    for(int i=3; i>=0; i--)
        printf("%d ", arr[i]);
    */


    char ch=0;
    while(ch !=EOF) //EOF.. 더이상 읽을 데이터가 없다.
    {                  //종료시 CTRL +Z (ENTER)
        ch = getchar();
        putchar(ch);  //한 문자를 출력
    }
    //char인데 문자 쳐도 왜 그대로 나오나?



    /*
    int age;
    int name[20];
    //문자열 입력은 한글같은 경우 char 아니고 int? 바이트크기로?

    printf("나이를 입력 : ");
    scanf("%d", &age);

    fflush(stdin);

    printf("이름을 입력 : ");
    //scanf("%s", name);  //배열은 주소연산자(&)을 붙이지 않는다.
    gets(name); //getchar(); 한문자

    printf("나이는 %d살입니다. \n", age);
    printf("이름은 %s입니다. \n", name);
    */


    return 0;
}
