#include <stdio.h>
int main()
{
	/*문제1번
	int array1[2][4] = {
		{1,2,3,4},
		{5,6,7,8}
	};
	int i,j;
	int array2[4][2];
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%2d ", array1[i][j]);
			array2[j][1-i] = array1[i][j];
		}
		printf("\n");
	}
	printf("\n");
	
	for (j = 0; j < 4; j++)
	{
		for (i = 0; i < 2; i++)
		{
			printf("%2d ", array2[j][i]);
		}
		printf("\n");
	}

	//00 01 02 03 = 01 11 21 31
	//10 11 12 13 = 00 10 20 30
	*/


	/*문제2번
	int num[3][3];
	int sum=0;
	int i,j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%d층 %d호의 가족은 몇 명입니까? : ", i + 1, j + 1);
			scanf("%d", &num[i][j]);
			sum += num[i][j];
		}
	}
	printf("열혈 아파트 총 주민수는 %d명입니다. \n", sum);
	*/


	/*문제3번
	int arr[9][9];
	int i, j;

	for (i = 0; i < 9; i++)
	{
		for (j = 0; j < 9; j++)
		{
			arr[i][j] = (i+1) * (j+1);
			printf("%2d ", arr[i][j]);
		}
		printf("\n");
	}
	*/

	/*문제4번
	int arr1[4][3] = {
		{23,75,85},
		{12,77,51},
		{25,66,30},
		{19,90,88}
	};
	int arr2[4][3] = {
		{11,15,47},
		{74,85,69},
		{57,86,28},
		{90,22,33}
	};
	int i, j;

	printf("합\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d ", arr1[i][j] + arr2[i][j]);
		}
		printf("\n");
	}

	printf("차\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			printf("%3d ", arr1[i][j] - arr2[i][j]);
		}
		printf("\n");
	}
	*/



	int array[2][3] = { 1,2,3,4,5,6 };

	printf("%x %x %x \n", &array[0][0], &array[0][1], &array[0][2]);
	printf("%x %x %x \n", *(array+0)+0, *(array+0)+1, *(array+0)+2);
	printf("%x %x %x \n", &array[1][0], &array[1][1], &array[1][2]);
	printf("%x %x %x \n", *(array+1)+0, *(array+1)+1, *(array+1)+2);

	printf("%d %d %d \n", array[0][0], array[0][1], array[0][2]);
	printf("%d %d %d \n", *(*(array + 0) + 0), *(*(array + 0) + 1), *(*(array + 0) + 2));
	printf("%d %d %d \n", array[1][0], array[1][1], array[1][2]);
	printf("%d %d %d \n", *(*(array + 1) + 0), *(*(array + 1) + 1), *(*(array + 1) + 2));
	return 0;
}