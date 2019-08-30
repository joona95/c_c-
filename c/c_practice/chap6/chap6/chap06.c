#include <stdio.h>
int main()
{
	/*문제1번
	//int num;
	double num;
	printf("실수를 입력하세요 : ");
	//scanf("%d", &num);
	scanf("%lf", &num);
	printf("당신이 입력한 수는 %d입니다.\n", (int)num);
	*/

	/*문제2번
	//char c=200;
	int c = 200;
	printf("c=%d \n", c);
	*/

	/*문제3번
	int i;
	float f;
	double d;
	i = (long)('a' + 1.3); //('a'+1.3)은 정수+실수=(실수)에서 (long)이되면서 데이터손실발생 -> long에서 int로 데이터손실발생 
	f = 2.49 + i; // 실수+정수(int)는 실수 = float 그대로
	d = (double)f*i; //float에서 double로 f형변환 실수*정수 = 실수이므로 double 그대로
	*/

	/*문제4번
	int c;   //char c;로 할경우 scanf("%d", &c)로 받는거 불가?
	printf("input = ");
	scanf("%d", &c);
	printf("입력한 코드에 해당하는 문자는 %c입니다. \n", c);
	*/

	/*문제5번
	//int result;
	double result;
	int input1;
	int input2;

	printf("input 2 numbers = ");
	scanf("%d %d", &input1, &input2);
	//result = input1 / input2;
	result = (double)input1 / input2;
	//printf("나눗셈 결과 = %d \n", result);
	printf("나눗셈 결과 = %.2lf \n", result);
	*/

	/*문제6번
	int r, k;
	double min;
	printf("트랙의 반지름 : ");
	scanf("%d", &r);
	printf("자동차의 속력 : ");
	scanf("%d", &k);
	min = 2 * 3.14 * r / k * 60;
	printf("한바퀴를 완주하는데 걸리는 시간은 %.3lf분이다.",min);
	*/

	int r;
	double a, l;
	printf("원의 반지름 : ");
	scanf("%d", &r);

	a = 3.14*r*r;
	l = 2 * 3.14*r;
	printf("원의 면적 : %.2lf \n", a);
	printf("원의 둘레 : %.2lf \n", l);

	return 0;
}