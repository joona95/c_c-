#include <stdio.h>

/*����1��
int abs(int num);
int main()
{
	int num;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &num);
	num = abs(num);
	printf("���� ���� : %d�Դϴ�. \n", num);

	return 0;
}

int abs(int num)
{
	if (num >= 0)
		return num;
	else
		return -num;
}
*/

/*����2��
int sum(int n);
int main()
{
	int i, result;
	for(i=1;i<=12;i++)
	{
		result = sum(i);
		printf("%3d ", result);
	}
	printf("\n");
		
	return 0;
}

int sum(int n)
{
	if (n <= 2)
		return 1;
	else
		return sum(n - 2) + sum(n - 1);
}
*/


/*����3��
int plus(int i, int j);
int minus(int i, int j);
int multiply(int i, int j);
float divide(int i, int j);
int main()
{
	int a, b;
	int result;
	double result2;
	printf("input two numbers : ");
	scanf("%d %d", &a, &b);
	result = plus(a, b);
	printf("a + b = %d \n", result);
	result = minus(a, b);
	printf("a - b = %d \n", result);
	result = multiply(a, b);
	printf("a * b = %d \n", result);
	result2 = divide(a, b);
	printf("a / b = %lf \n", result2);

	return 0;
}

int plus(int i, int j)
{
	return i + j;
}
int minus(int i, int j)
{
	return i - j;
}
int multiply(int i, int j)
{
	return i * j;
}
float divide(int i, int j)
{
	return (float)i / j;
}
*/


/*����4��
int getArea(int x, int y);
int main()
{
	int a, b;
	int result;
	printf("�غ� ���� : ");
	scanf("%d", &a);
	printf("���� : ");
	scanf("%d", &b);

	result = getArea(a, b);
	printf("�簢���� ���̴� %d�Դϴ�. \n", result);
	
	return 0;
}

int getArea(int x, int y)
{
	return x * y;
}
*/


/*����5��
int square(int x);
int cube(int x);
int quartic(int x);
int quintic(int x);
int main()
{
	int i;
	printf("A TABLE OF POWERS \n");
	printf("--------------------------------------------------------------------------\n");
	printf("  INTEGER\tSQUARE\t\t  CUBE\t\tQUARTIC\t\tQUINTIC \n");
	printf("--------------------------------------------------------------------------\n");
	for (i = 1; i < 4; i++)
	{
		printf("%10d \t %6d \t %6d \t %6d \t %6d \n", i,square(i),cube(i),quartic(i),quintic(i));
	}
	
	return 0;
}

int square(int x)
{
	return x * x;
}
int cube(int x)
{
	return x * x*x;
}
int quartic(int x)
{
	return x*x*x*x;
}
int quintic(int x)
{
	return x * x*x*x*x;
}
*/

/*����6��
int add(int x, int y);
int count(void);
int main()
{
	int a, b;
	int result;
	int cnt;
	while (1)
	{
		printf("���� �� ���� �Է��ϼ���(0 0 -> exit) : ");
		scanf("%d %d", &a, &b);
		result = add(a, b);
		cnt = count();

		if (a == 0 && b == 0)
		{
			printf("�� ���� �� : %d \n", cnt - 1);
			break;
		}
		printf("���� ��� : %d \n", result);
	}
		
	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int count(void)
{
	static int i = 0;

	if (i > 100)
		return i;

	i += 1;
	return i;
}
*/


/*����7��
char Alpha(char a);
int main()
{
	char a, num;
	printf("���ĺ��� �Է��ϼ��� : ");
	scanf("%c", &a);
	num = Alpha(a);
	printf("�Է��� %c�� ���ĺ� ������ %d��° �����Դϴ�. \n", a, num);
	return 0;
}

char Alpha(char a)
{
	if (a < 97)
		return a - 64;
	else
		return a - 96;
}
*/


//����8��
int sum(int n);
int main()
{
	int num, result;
	printf("input your number = ");
	scanf("%d", &num);
	result = sum(num);
	printf("1���� %d������ �� = %d \n", num, result);
	return 0;
}

int sum(int n)
{
	if (n <= 1)
		return 1;
	return n + sum(n - 1);
}