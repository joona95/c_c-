#include <stdio.h>
int main()
{
    /*
    int arr[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d��° �л��� ���� : ", i+1);
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
    while(ch !=EOF) //EOF.. ���̻� ���� �����Ͱ� ����.
    {                  //����� CTRL +Z (ENTER)
        ch = getchar();
        putchar(ch);  //�� ���ڸ� ���
    }
    //char�ε� ���� �ĵ� �� �״�� ������?



    /*
    int age;
    int name[20];
    //���ڿ� �Է��� �ѱ۰��� ��� char �ƴϰ� int? ����Ʈũ���?

    printf("���̸� �Է� : ");
    scanf("%d", &age);

    fflush(stdin);

    printf("�̸��� �Է� : ");
    //scanf("%s", name);  //�迭�� �ּҿ�����(&)�� ������ �ʴ´�.
    gets(name); //getchar(); �ѹ���

    printf("���̴� %d���Դϴ�. \n", age);
    printf("�̸��� %s�Դϴ�. \n", name);
    */


    return 0;
}
