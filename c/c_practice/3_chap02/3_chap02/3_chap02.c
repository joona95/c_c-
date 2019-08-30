#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

struct student 
{
	char no[20];
	char name[10];
	int eng_grade;
	int kor_grade;
};


int main()
{
	/*문제1번
	char arr[50];
	int i, j;
	int count[26] = { 0, };

	printf("단어를 입력하세요 : ");
	gets_s(arr, sizeof(arr));

	for (i = 0; i < (int)strlen(arr); i++)
	{
	
		for (j = 0; j < 26; j++)
		{
			
			if ((arr[i]==(97 + j)) || (arr[i]==(65 + j)))
			{
				count[j] += 1;
			}
			
		}
		
	}

	for (j = 0; j < 26; j++)
	{
		if(count[j]!=0)
			printf("%c : %d개 \n", 97 + j, count[j]);
	}
	*/

	/*문제2번
	char arr[10][15];
	char temp[15];
	int count = 0;
	int i,j;

	puts("입력을 종료하려면 그냥 엔터를 누르세요.");
	for (i = 0; i < 10; i++)
	{
		printf("%d번째? ", i+1);
		gets_s(arr[i],sizeof(arr[i]));
		count++;
		if (arr[i][0] == 0) 
		{
			puts("<enter>");
			break;
		}
	}

	
	for (i = 0; i < count-2; i++)
	{
		for (j = i+1; j<count-1; j++)
		{
			if (strcmp(arr[i], arr[j]) > 0)
			{
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}

	}

	for (i = 0; i < count - 1; i++)
	{
		arr[i][strlen(arr[i])] = 0;

		printf("%s ", arr[i]);
	}
	printf("\n");
	*/

	/*문제3번
	char a[] = "문자열";
	char b[] = "문자열";

	if (strcmp(a,b)==0)
		puts("a와 b가 같습니다.");
	else
		puts("a와 b가 같지 않습니다.");
	*/


	/*문제4번
	char arr[50];

	puts("문자열을 입력하세요 : ");
	gets_s(arr,sizeof(arr));
	_strrev(arr);
	puts(arr);
	*/

	/*문제5번
	char arr[50];
	int num;

	puts("문자열을 입력하세요: ");
	gets_s(arr,sizeof(arr));
	puts("문자열을 정수로 출력: ");
	num = atoi(arr);
	printf("%d \n", num);
	*/

	/*문제6번
	char str[50];
	int len;
	int i;

	puts("알파벳 문자열 입력: ");
	gets_s(str, sizeof(str));
	len = strlen(str);
	printf("입력한 문자열 개수: %d개 \n",len);
	for (i = 0; i < len + 1; i++)
	{
		if (islower(str[i]))
		{
			printf("%c", toupper(str[i]));
		}
		else
		{
			printf("%c", tolower(str[i]));
		}
	}
	printf("\n");
	*/

	struct student stu;

	puts("학번 : ");
	gets_s(stu.no, sizeof(stu.no));
	puts("이름 : ");
	gets_s(stu.name,sizeof(stu.name));
	puts("영어 점수 : ");
	scanf("%d", &stu.eng_grade);
	puts("국어 점수 : ");
	scanf("%d", &stu.kor_grade);
	puts("============================");
	
	if (strstr(stu.no,"2010"))
	{
		printf("이름 : ");
		puts(stu.name);
		printf("영어 점수 : %d \n", stu.eng_grade);
		printf("국어 점수 : %d \n", stu.kor_grade);
	}

	

	return 0;
}