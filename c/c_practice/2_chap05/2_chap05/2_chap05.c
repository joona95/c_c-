#include <stdio.h>
//void func(char c, char* str, int num1, double num2); //문제1번
//void func(int* a, int(*b)[2]); //문제2번
//void func(int* p); //문제3번
//void swap(int* a, int* b); //문제4번
//void swap(int** q1, int** q2); //문제5번
//문제6번
void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);
int main()
{
	/*문제1번
	char c = 'A';
	char* str = "ABCD";
	int num1 = 10;
	double num2 = 3.14;

	func(c, str, num1, num2);
	*/

	/*문제2번
	int array1[4] = { 10,20,30,40 };
	int array2[2][2] = { 50,60,70,80 };

	func(array1, array2);
	*/

	/*문제3번
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int i;

	printf("실행 전 : ");
	for (i = 0; i < 8; i++)
		printf("%d ", arr[i]);
	printf("\n");

	func(arr);

	printf("실행 후 : ");
	for (i = 0; i < 8; i++)
		printf("%d ", arr[i]);
	printf("\n");
	*/

	/*문제4번
	int i = 10, j = 20;

	printf("main() : i=%d, j=%d \n", i, j);
	swap(&i, &j);
	printf("main() : i=%d, j=%d \n", i, j);
	*/

	/*문제5번
	int a = 10, b = 20;
	int *p1 = NULL, *p2 = NULL;

	p1 = &a;
	p2 = &b;

	printf("---------------함수 호출 전--------------- \n");
	printf("a = %d, b = %d \n", a, b);
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);

	swap(&p1, &p2);

	printf("---------------함수 호출 후--------------- \n");
	printf("a = %d, b = %d \n", a, b);
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);
	*/

	//문제6번
	int *a, *b, *c;
	double *d;

	a = add(4, 8);
	b = subtract(4, 8);
	c = multiply(4, 8);
	d = divide(4, 8);

	printf("%d %d %d %lf \n", *a, *b, *c, *d);

	return 0;
}

/*문제1번
void func(char c, char* str, int num1, double num2)
{
	printf("%c %s %d %.2lf \n", c, str, num1, num2);
}
*/

/*문제2번
void func(int* a, int(*b)[2])
{
	printf("%d %d %d %d \n", *( a+ 0), *(a + 1), *(a + 2), *(a + 3));
	printf("%d %d %d %d \n", b[0][0],b[0][1],b[1][0],b[1][1]);
}
*/

/*문제3번
void func(int* p)
{
	int i;
	int temp[8];
	for (i = 0; i < 7; i++)
	{
		temp[i + 1] = p[i];
	}
	temp[0] = p[i];

	for (i = 0; i < 8; i++)
		p[i] = temp[i];
}
*/

/*문제4번
void swap(int* a, int* b)
{
	int temp; //지역변수
	temp = *a; 
	*a = *b;
	*b = temp;
}
*/

/*문제5번
void swap(int** q1, int** q2)
{
	int* temp;
	temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}*/

//문제6번
void* add(int a, int b)
{
	static int result;
	result = a + b;
	return &result;
}
void* subtract(int a, int b)
{
	static int result;
	result = a - b;
	return &result;
}
void* multiply(int a, int b)
{
	static int result;
	result = a * b;
	return &result;
}
void* divide(int a, int b)
{
	static double result;
	result = (double)a / b;
	return &result;
}