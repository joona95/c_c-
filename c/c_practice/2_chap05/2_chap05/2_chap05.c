#include <stdio.h>
//void func(char c, char* str, int num1, double num2); //����1��
//void func(int* a, int(*b)[2]); //����2��
//void func(int* p); //����3��
//void swap(int* a, int* b); //����4��
//void swap(int** q1, int** q2); //����5��
//����6��
void* add(int a, int b);
void* subtract(int a, int b);
void* multiply(int a, int b);
void* divide(int a, int b);
int main()
{
	/*����1��
	char c = 'A';
	char* str = "ABCD";
	int num1 = 10;
	double num2 = 3.14;

	func(c, str, num1, num2);
	*/

	/*����2��
	int array1[4] = { 10,20,30,40 };
	int array2[2][2] = { 50,60,70,80 };

	func(array1, array2);
	*/

	/*����3��
	int arr[] = { 1,2,3,4,5,6,7,8 };
	int i;

	printf("���� �� : ");
	for (i = 0; i < 8; i++)
		printf("%d ", arr[i]);
	printf("\n");

	func(arr);

	printf("���� �� : ");
	for (i = 0; i < 8; i++)
		printf("%d ", arr[i]);
	printf("\n");
	*/

	/*����4��
	int i = 10, j = 20;

	printf("main() : i=%d, j=%d \n", i, j);
	swap(&i, &j);
	printf("main() : i=%d, j=%d \n", i, j);
	*/

	/*����5��
	int a = 10, b = 20;
	int *p1 = NULL, *p2 = NULL;

	p1 = &a;
	p2 = &b;

	printf("---------------�Լ� ȣ�� ��--------------- \n");
	printf("a = %d, b = %d \n", a, b);
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);

	swap(&p1, &p2);

	printf("---------------�Լ� ȣ�� ��--------------- \n");
	printf("a = %d, b = %d \n", a, b);
	printf("*p1 = %d, *p2 = %d \n", *p1, *p2);
	*/

	//����6��
	int *a, *b, *c;
	double *d;

	a = add(4, 8);
	b = subtract(4, 8);
	c = multiply(4, 8);
	d = divide(4, 8);

	printf("%d %d %d %lf \n", *a, *b, *c, *d);

	return 0;
}

/*����1��
void func(char c, char* str, int num1, double num2)
{
	printf("%c %s %d %.2lf \n", c, str, num1, num2);
}
*/

/*����2��
void func(int* a, int(*b)[2])
{
	printf("%d %d %d %d \n", *( a+ 0), *(a + 1), *(a + 2), *(a + 3));
	printf("%d %d %d %d \n", b[0][0],b[0][1],b[1][0],b[1][1]);
}
*/

/*����3��
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

/*����4��
void swap(int* a, int* b)
{
	int temp; //��������
	temp = *a; 
	*a = *b;
	*b = temp;
}
*/

/*����5��
void swap(int** q1, int** q2)
{
	int* temp;
	temp = *q1;
	*q1 = *q2;
	*q2 = temp;
}*/

//����6��
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