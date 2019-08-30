#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct student
{
	char name[10];
	int num;
	double score1, score2, score3;
	double total;
};

struct exam
{
	char num[20];
	char name[10];
	int mid, fin, attend, task, total;
	char grade[3];
};

int main() 
{
	/*문제1번
	FILE* stream;
	int i, j;

	stream = fopen("99.txt", "w");
	
	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			fprintf(stream, "%d * %d = %d \n", i, j, i*j);
		}
	}
	fclose(stream);
	*/


	/*문제2번
	FILE* stream;
	int i, j;

	stream = fopen("99_2.txt", "w");

	for (i = 2; i < 10; i++)
	{
		for (j = 1; j < 10; j++)
		{
			char buff[10];
			char *p;

			p = _itoa(i, buff, 10);
			fputc(*p, stream);
			fputc('*', stream);
			p = _itoa(j, buff, 10);
			fputc(*p, stream);
			fputc('=', stream);
			p = _itoa(i*j, buff, 10);
			fputc(*p, stream);
			fputc(10, stream);
		}
	}
	fclose(stream);
	*/


	/*문제3번
	FILE* stream1;
	FILE* stream2;
	stream1 = fopen("source.txt", "r");
	stream2 = fopen("dest.txt", "w");
	char str1[20] = { 0, }, str2[20] = { 0, };
	int i, j;

	while (!feof(stream1))
	{
		fgets(str1, sizeof(str1), stream1);
	
		for (i = 0; i < (int)(strlen(str1) / 5); i++)
		{
			for (j = 0; j < 5; j++)
			{
				str2[5 * (i + 1) - (j + 1)] = str1[5 * i + j];
			}
		}

		i = (strlen(str1) / 5);
		for (j = 0; j < (int)(strlen(str1) % 5); j++)
		{
			str2[strlen(str1) - (j + 1)] = str1[5 * i + j];
		}
	}
	
	fputs(str2, stream2);
	
	fclose(stream1);
	fclose(stream2);

	*/



	/*문제4번, 5번, 6번
	FILE *stream1, *stream2;
	struct student stu[7];
	int i;
	int num;

	//문제4번, 5번
	//stream1 = fopen("score.txt", "r");
	//문제6번
	stream1 = fopen("score.txt", "rb");
	stream2 = fopen("total.txt", "w");
	
	//문제4번
	for (i = 0; i < 7; i++)
	{
		fscanf(stream1,"%d. %s %lf %lf %lf",&stu[i].num, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
		stu[i].total = stu[i].score1 + stu[i].score2 + stu[i].score3;
		fprintf(stream2, "총점: %.1lf \n", stu[i].total);
	}


	//문제5번
	for (i = 0; i < 7; i++)
	{
		fscanf(stream1, "%d. %s %lf %lf %lf", &stu[i].num, &stu[i].name, &stu[i].score1, &stu[i].score2, &stu[i].score3);
		stu[i].total = stu[i].score1 + stu[i].score2 + stu[i].score3;
	}

	printf("번호 입력: ");
	fscanf(stdin, "%d", &num);

	for (i = 0; i < 7; i++)
	{
		if (num == stu[i].num)
		{
			fprintf(stdout, "이름: %s, 총점: %.1lf \n", stu[i].name, stu[i].total);
		}
	}
	

	//문제6번
	fseek(stream1, 0, SEEK_END);
	printf("score.txt 파일의 크기 : %d바이트 \n", ftell(stream1));
	
	fclose(stream1);
	fclose(stream2);
	*/



	//문제7번
	FILE* stream;
	struct exam stu[10];
	int i;

	stream = fopen("student.txt", "w");
	fprintf(stream, "학번 \t 이름   \t   중간고사     기말고사 \t 출석 \t 과제 \t 총점 \t 학점 \n");

	for (i = 0; i < 3; i++)
	{
		printf("학번: ");
		fscanf(stdin, "%s", &stu[i].num);
		printf("이름: ");
		fscanf(stdin, "%s", &stu[i].name);
		printf("중간고사 점수: ");
		fscanf(stdin, "%d", &stu[i].mid);
		printf("기말고사 점수: ");
		fscanf(stdin, "%d", &stu[i].fin);
		printf("출석 점수: ");
		fscanf(stdin, "%d", &stu[i].attend);
		printf("과제 점수: ");
		fscanf(stdin, "%d", &stu[i].task);

		stu[i].total = stu[i].mid + stu[i].fin + stu[i].attend + stu[i].task;

		if (stu[i].total > 95)
		{
			strcpy(stu[i].grade, "A+");
		}
		else if (stu[i].total > 90)
		{
			strcpy(stu[i].grade, "A");
		}
		else if (stu[i].total > 85)
		{
			strcpy(stu[i].grade, "B+");
		}
		else if (stu[i].total > 80)
		{
			strcpy(stu[i].grade, "B");
		}
		else
		{
			strcpy(stu[i].grade, "F");
		}

		fprintf(stream, "%s \t %s \t \t %d \t   %d \t %d \t %d \t %d \t %s \n", stu[i].num, stu[i].name, stu[i].mid, stu[i].fin, stu[i].attend, stu[i].task, stu[i].total, stu[i].grade);

	}

	fclose(stream);


	return 0;
}