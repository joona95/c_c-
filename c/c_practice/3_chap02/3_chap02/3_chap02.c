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
	/*����1��
	char arr[50];
	int i, j;
	int count[26] = { 0, };

	printf("�ܾ �Է��ϼ��� : ");
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
			printf("%c : %d�� \n", 97 + j, count[j]);
	}
	*/

	/*����2��
	char arr[10][15];
	char temp[15];
	int count = 0;
	int i,j;

	puts("�Է��� �����Ϸ��� �׳� ���͸� ��������.");
	for (i = 0; i < 10; i++)
	{
		printf("%d��°? ", i+1);
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

	/*����3��
	char a[] = "���ڿ�";
	char b[] = "���ڿ�";

	if (strcmp(a,b)==0)
		puts("a�� b�� �����ϴ�.");
	else
		puts("a�� b�� ���� �ʽ��ϴ�.");
	*/


	/*����4��
	char arr[50];

	puts("���ڿ��� �Է��ϼ��� : ");
	gets_s(arr,sizeof(arr));
	_strrev(arr);
	puts(arr);
	*/

	/*����5��
	char arr[50];
	int num;

	puts("���ڿ��� �Է��ϼ���: ");
	gets_s(arr,sizeof(arr));
	puts("���ڿ��� ������ ���: ");
	num = atoi(arr);
	printf("%d \n", num);
	*/

	/*����6��
	char str[50];
	int len;
	int i;

	puts("���ĺ� ���ڿ� �Է�: ");
	gets_s(str, sizeof(str));
	len = strlen(str);
	printf("�Է��� ���ڿ� ����: %d�� \n",len);
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

	puts("�й� : ");
	gets_s(stu.no, sizeof(stu.no));
	puts("�̸� : ");
	gets_s(stu.name,sizeof(stu.name));
	puts("���� ���� : ");
	scanf("%d", &stu.eng_grade);
	puts("���� ���� : ");
	scanf("%d", &stu.kor_grade);
	puts("============================");
	
	if (strstr(stu.no,"2010"))
	{
		printf("�̸� : ");
		puts(stu.name);
		printf("���� ���� : %d \n", stu.eng_grade);
		printf("���� ���� : %d \n", stu.kor_grade);
	}

	

	return 0;
}