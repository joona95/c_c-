#include <stdio.h>
int main()
{
	/*문제1번
	int a, b;
	printf("두 개의 정수를 입력하세요 : ");
	scanf("%d %d", &a, &b);
	if (a > b)
		printf("큰 수는 %d입니다. \n", a);
	else if (a == b)
		printf("두 수는 같습니다. \n");
	else
		printf("큰 수는 %d입니다. \n", b);
	*/

	/*문제2번
	int num;
	int a, b, c;
	printf("3자리 십진수를 입력하세요 : ");
	scanf("%d", &num);
	a = num / 100;
	b = (num - a * 100) / 10;
	c = (num - a * 100 - b * 10);
	if (a % 2 == 0)
		printf("%d : 짝수 ",a);
	else
		printf("%d : 홀수 ",a);
	if (b % 2 == 0)
		printf("%d : 짝수 ",b);
	else
		printf("%d : 홀수 ",b);
	if (c % 2 == 0)
		printf("%d : 짝수 ",c);
	else
		printf("%d : 홀수 ",c);
	printf("\n");
	*/

	/*문제3번
	int grade;
	printf("점수를 입력하세요 : ");
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

	/*문제4번
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

	/*문제5번*/
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