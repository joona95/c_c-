#include <stdio.h>
int main()
{
	/*����1��
	int a, b;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("ū ���� %d�Դϴ�. \n", a);
	else if (a == b)
		printf("�� ���� �����ϴ�. \n");
	else
		printf("ū ���� %d�Դϴ�. \n", b);
	*/

	/*����2��
	int num;
	int a, b, c;
	printf("3�ڸ� �������� �Է��ϼ��� : ");
	scanf("%d", &num);
	a = num / 100;
	b = (num - a * 100) / 10;
	c = (num - a * 100 - b * 10);
	if (a % 2 == 0)
		printf("%d : ¦�� ",a);
	else
		printf("%d : Ȧ�� ",a);
	if (b % 2 == 0)
		printf("%d : ¦�� ",b);
	else
		printf("%d : Ȧ�� ",b);
	if (c % 2 == 0)
		printf("%d : ¦�� ",c);
	else
		printf("%d : Ȧ�� ",c);
	printf("\n");
	*/

	/*����3��
	int grade;
	printf("������ �Է��ϼ��� : ");
	scanf("%d", &grade);

	grade=grade/10
	switch (grade)
	{
	case 10:
	case 9:
		printf("A \n");
		break;
	case 8:
		printf("B \n");
		break;
	default:
		printf("F \n");
	}
	*/

	/*����4��
	int i;
	for (i = 1; i < 101; i++)
	{
		if (i % 2 == 0)
			continue;
		else
			printf("%d ", i);
	}
	printf("\n");
	*/

	/*����5��*/
	int a, b, c;
	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	printf("input : ");
	scanf("%d", &c);

	if (a > b && a > c)
		printf("result : %d \n", a);
	else if (b > a && b > c)
		printf("result : %d \n", b);
	else
		printf("result : %d \n", c);

	return 0;
}