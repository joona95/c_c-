#include <stdio.h>
int main()
{
	/*문제1번
	int num, i=1;
	printf("입력(양의 정수) : ");
	scanf("%d", &num);
	printf("%d의 배수 : ", num);
	
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
	printf("\n%d의 배수 개수 : %d \n", num, i - 1);
	*/

	/*문제2번
	int i, j;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j <= i; j++)
			printf("*");
		printf("\n");
	}
	*/

	/*문제3번
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

	/*문제4번
	int num, i;
	printf("숫자를 입력하세요 : ");
	scanf("%d", &num);
	for (i = 0; i < 10; i++)
	{
		printf("%d * %d = %d입니다. \n", num, i, num*i);
	}
	*/

	/*문제5번
	int num, i, fact=1;
	printf("팩토리얼 연산을 원하는 숫자를 입력하세요 : ");
	scanf("%d", &num);
	for (i=1;i<=num;i++)
	{
		fact = fact * i;
	}
	printf("%d의 팩토리얼 연산 결과는 %d입니다. \n", num, fact);
	*/

	/*문제6번
	int a, b;
	while(1)
	{
		printf("첫 번째 수를 입력해 주세요 : ");
		scanf("%d", &a);
		printf("두 번째 수를 입력해 주세요 : ");
		scanf("%d", &b);
		printf("%d + %d = %d입니다. \n", a, b, a + b);
	}
	*/

	/*문제7번
	int g, i;
	int sum = 0;
	
	printf("열 과목의 점수의 평균을 계산합니다. \n");

	for (i = 0; i < 10; i++)
	{
		printf("점수를 입력해 주세요 : ");
		scanf("%d", &g);
		sum = sum + g;
	}
	printf("열 과목 점수의 평균은 %.1lf점입니다. \n", (double)sum / 10);
	*/

	int num;
	int i=0, sum = 0;

	while (1)
	{


		printf("정수 입력 : ");
		scanf("%d", &num);
		sum = sum + num;
		i++;

		if (num == 0)
			break;
	}
	printf("입력한 정수의 덧셈 결과 : %d, 입력 횟수 : %d \n", sum, i);

	return 0;
}