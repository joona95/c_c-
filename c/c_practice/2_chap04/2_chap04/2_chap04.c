#include <stdio.h>
int main()
{
	/*����1��
	int array[] = { 10,30,40,30,20 };
	int* p = NULL;
	int sum1 = 0, sum2=0;
	int i;

	p = array;
	for (i = 0; i < 5; i++)
	{
		sum1 += array[i];
		sum2 += *(p + i);
	}
	printf("�迭�� �� : %d  %d  \n", sum1, sum2);
	*/


	/*����2��
	int array[5] = { 10,20,30,40,50 };
	int* p = NULL;

	p = array;
	printf("%d %d %d %d %d \n", p[0], p[1], p[2], p[3], p[4]);
	printf("%d %d %d %d %d \n", *(p + 0), *(p + 1), *(p + 2), *(p + 3), *(p + 4));
	*/


	/*����3��
	int a = 10, b = 20;
	int* array[2] = { &a, &b };

	printf("%x %x \n", &a, &b);
	printf("%x %x \n", array[0], array[1]);

	printf("%d %d \n", *&a, *&b);
	printf("%d %d \n", *array[0], *array[1]);
	*/


	/*����3��
	int array[2][3] = { 10,20,30,40,50,60 };
	int(*p)[3] = NULL;
	//�����͹迭 int* p[3] = {NULL, NULL, NULL};
	//�迭������ int (*p)[3]=NULL;

	p = array;
	printf("%d %d %d \n", p[0][0], p[0][1], p[0][2]);
	printf("%d %d %d \n", p[1][0], p[1][1], p[1][2]);
	*/


	/*����5��
	char* string[2] = { "I Love C", "Hello World" };

	printf("%s %s \n", string[0], string[1] + 6);
	*/



	char* array1 = "ABCD";
	char array2[] = "ABCD";

	//array1[0] = 'X';
	//array1=&"ABCD"�̹Ƿ� ���ڿ� ABCD�� ���ڿ� ���(���� �Ұ�)
	array2[0] = 'X';

	printf("%c \n", array1[0]);

	return 0;
}