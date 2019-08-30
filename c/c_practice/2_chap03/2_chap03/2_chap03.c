#include <stdio.h>
void arrInput(int* arr, int n);
int main()
{
	/*문제3번
	int num = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;

	ip1 = &num;
	ip2 = &ip1;
	ip3 = &ip2;

	printf("%d %d %d %d \n", num, *ip1, **ip2, ***ip3);
	printf("%x %x %x %x \n", &num, ip1, *ip2, **ip3);
	printf("%x %x %x %x \n", &num, &ip1, &ip2, &ip3);
	printf("%x %x %x \n", &ip1, ip2, *ip3);
	printf("%x %x \n", &ip2, ip3);
	*/

	/*문제4번
	int num1 = 10;
	int* ip1 = NULL;
	int** ip2 = NULL;
	int*** ip3 = NULL;

	ip1 = &num1;
	ip2 = &ip1;
	ip3 = &ip2;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	*ip1 = 20;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	**ip2 = 30;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);

	***ip3 = 40;
	printf("%d %d %d %d \n", num1, *ip1, **ip2, ***ip3);
	*/

	/*문제5번
	int array[3] = { 10,20,30 };
	int* ip = NULL;
	int** ipp = NULL;

	ip = array;
	ipp = &ip;

	printf("%d %d %d \n", array[0], array[1], array[2]);
	printf("%d %d %d \n", *(array+0), *(array+1), *(array+2));
	printf("%d %d %d \n", *(ip+0), *(ip+1), *(ip+2));
	printf("%d %d %d \n", *ip+0, *ip+1, *ip+2);
	printf("%x %x %x \n", &array[0], &array[1], &array[2]);
	printf("%x %x %x \n", array+0, array+1, array+2);
	printf("%x %x %x \n", ip+0, ip+1, ip+2);
	printf("%x %x %x \n", &ip, ipp, *ipp);
	*/

	//문제6번
	int array[5] = { 10,20,30,40,50 };
	void (*pfunc)(int*, int);

	pfunc = arrInput;
	pfunc(array, 5);

	return 0;
}

void arrInput(int* arr, int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%d ", arr[i]);
	printf("\n");
}