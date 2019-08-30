#include <stdio.h>
int main()
{
	/*1번문제
	int x, y, z;
	int result;
	printf("input x : ");
	scanf("%d", &x);
	printf("input y : ");
	scanf("%d", &y);
	printf("input z : ");
	scanf("%d", &z);
	result = (x + y) * (x + z) / (y % z);
	printf("(x + y) * (x + z) / (y %% z) = %d \n", result);
	*/

	/*2번문제
	int a, b;
	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	(a == b) ? printf("같음\n") :
		(a > b) ? printf("Smaller Number : %d \n", b) : printf("Smaller Number : %d \n", a);
	*/

	/*3번문제
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	a = x < y || x < z && z < k;
	printf("결과 값1 a : %d \n", a); 
	a = (x < y || x < z) && z < k;
	printf("결과 값2 a : %d \n", a);
	//&&이 ||보다 연산자 우선순위
	*/

	/*4번문제
	int a, b, c;
	printf("정수 입력 : ");
	scanf("%d", &a);
	printf("정수 입력 : ");
	scanf("%d", &b);
	printf("정수 입력 : ");
	scanf("%d", &c);

	(a > b) && (a > c) ? printf("Max : %d \n", a) :
		(b > a) && (b > c) ? printf("Max : %d \n", b) : printf("Max : %d \n", c);
	*/
	
	/*5번문제
	int won = 1120;
	int d;
	printf("dollar : ");
	scanf("%d", &d);
	printf("won : %d \n", d*won);
	*/

	/*6번문제
	int live = 100;
	int day;
	int smoke;
	printf("하루에 담배 몇 개피씩 20년간 피웠다면 ?");
	scanf("%d", &day);
	smoke = 365 * 20 * day * 2;
	live = live - (double)smoke/60/24/365;
	printf("단축된 수명은 %d분이고, %d살까지 살 수 있다.", smoke, live);
	*/

	/*7번문제
	int a,b,c,d;
	int num;
	printf("0000~1111 사이의 2진수 입력 : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	num = d * 1 + c * 2 + b * 4 + a * 8;
	printf("10진수 : %d\n", num);
	*/

	/*8번문제
	int hour, min, sec;
	int time;
	printf("현재시각(시) : ");
	scanf("%d", &hour);
	printf("현재시각(분) : ");
	scanf("%d", &min);
	printf("현재시각(초) : ");
	scanf("%d", &sec);
	time = hour * 60 * 60 + min * 60 + sec;
	printf("오늘 00시 00분 00초 기준으로 %d초 흘렀다.\n", time);
	*/

	/*9번문제
	int pound = 150;
	double kg;
	const double P = 0.45;
	kg = P * pound;
	printf("밀가루 %d파운드는 %.2lf kg이다. \n", pound, kg);
	*/

	/*10번문제
	const double F = 30.48;
	int feet = 15000;
	double m;
	m = F * feet / 100;
	printf("비행기가 고도 %d 피트 상공을 날고 있다면, 지상에서 %.2lf m 떨어져 있다. \n", feet, m);
	*/


	return 0;
}