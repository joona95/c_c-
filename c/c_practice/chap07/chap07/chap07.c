#include <stdio.h>
int main()
{
	/*����1��
	int num, i=1;
	printf("�Է�(���� ����) : ");
	scanf("%d", &num);
	printf("%d�� ��� : ", num);
	
	//while
	while (num*i <= 100)
	{
		printf("%d ", num*i);
		i++;
	}
	//for
	for (i = 1; num*i <= 100; i++)
	{
		printf("%d ", num*i);
	}
	printf("\n%d�� ��� ���� : %d \n", num, i - 1);
	*/

	/*����2��
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	*/

	/*����3��
	int i, j, k;
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < i; j++)
			printf(" ");
		for (k =7-2*i ;k>0 ;k-- )
			printf("*");
		printf("\n");
	}
	*/

	/*����4��
	int num, i;
	printf("���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	for (i = 0; i < 10; i++)
	{
		printf("%d * %d = %d�Դϴ�. \n", num, i, num*i);
	}
	*/

	/*����5��
	int num, i, fact=1;
	printf("���丮�� ������ ���ϴ� ���ڸ� �Է��ϼ��� : ");
	scanf("%d", &num);
	for (i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d�� ���丮�� ���� ����� %d�Դϴ�. \n", num, fact);
	*/

	/*����6��
	int a, b;
	while(1)
	{
		printf("ù ��° ���� �Է��� �ּ��� : ");
		scanf("%d", &a);
		printf("�� ��° ���� �Է��� �ּ��� : ");
		scanf("%d", &b);
		printf("%d + %d = %d�Դϴ�. \n", a, b, a + b);
	}
	*/

	/*����7��
	int g, i;
	int sum = 0;
	
	printf("�� ������ ������ ����� ����մϴ�. \n");

	for (i = 0; i < 10; i++)
	{
		printf("������ �Է��� �ּ��� : ");
		scanf("%d", &g);
		sum = sum + g;
	}
	printf("�� ���� ������ ����� %.1lf���Դϴ�. \n", (double)sum / 10);
	*/

	int num;
	int i=0, sum = 0;

	while (1)
	{


		printf("���� �Է� : ");
		scanf("%d", &num);
		sum = sum + num;
		i++;

		if (num == 0)
			break;
	}
	printf("�Է��� ������ ���� ��� : %d, �Է� Ƚ�� : %d \n", sum, i);

	return 0;
}