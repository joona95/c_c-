#include <stdio.h>
int main()
{
	/*문제1번
	char arr[6] = "ABC";
	int i;
	for (i = 0; i < 6; i++)
		printf("%c", arr[i]);
	printf("\n");
	for (i = 0; i < 3; i++)
	{
		arr[5 - i] = arr[i];
	}
	for (i = 0; i < 6; i++)
		printf("%c", arr[i]);
	printf("\n");
	*/

	/*문제2번
	int arr[10];
	int i;
	int sum = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d번째 학생 성적 : ", i + 1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("총점 : %d, 평균: %.2lf", sum, (double)sum / 10);
	*/


	/*문제3번
	int arr[15] = { 90,78,77,98,98,80,45,67,88,57,88,99,65,55,74 };
	int hsum[3] = {0,};
	int vsum[5] = { 0, };
	int total = 0;
	int i;

	for (i = 0; i < 15; i++)
	{
		hsum[i / 5] += arr[i];
		vsum[i % 5] += arr[i];
		total += arr[i];
	}

	printf("가로 합 : ");
	for (i = 0; i < 3; i++)
		printf("%d ", hsum[i]);
	printf("\n세로 합 : ");
	for (i = 0; i < 5; i++)
		printf("%d ", vsum[i]);
	printf("\n전체 합 : %d\n", total);
	*/


	/*문제4번
	int arr[9];
	int num,i;

	printf("정수 입력 : ");
	scanf("%d", &num);

	for (i = 0; i < 9; i++)
	{
		arr[i] = (i + 1)*num;
		printf("%d ", arr[i]);
	}
	printf("\n");
	*/


	/*문제5번
	double a[] = { 2.2, 3.5, 2.5, 10.1, 4.0 };
	double b[] = { 3.3, 2.0, 4.0, 1.0, 2.5 };
	double arr[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		arr[i] = a[i] * b[i];
		printf("%.2lf ", arr[i]);
	}
	printf("\n");
	*/


	char array1[5] = { 'A','B','C','D','E' };
	int array2[5] = { 10,20,30,40,50 };
	double array3[5] = { 10.1,20.2,30.3,40.4,50.5 };
	int i;

	for (i = 0; i < 5; i++)
		printf("%x ", &array1[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%x ", &array2[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%x ", &array3[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%c ", *&array1[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%d ", *&array2[i]);
	printf("\n");
	for (i = 0; i < 5; i++)
		printf("%.1lf ", *&array3[i]);
	printf("\n");


	return 0;
}