#include <stdio.h>
//문제1번
#include "myheader.h"
//문제2번
#define ADD(x,y) x+y
//문제3번
#include "score.h"
//문제4번
#include "point.h"

int main()
{
	/*문제1번
	printf("합 : %d \n",plus(3, 5));
	printf("차 : %d \n",minus(3, 5));
	printf("곱 : %d \n",multiply(3, 5));
	printf("나눗셈 : %lf \n",divide(3, 5));
	*/

	/*문제2번
	int x = 5;
	int y = 5;
	printf("x+y는 %d 입니다. \n", ADD(x, y));
	*/

	/*문제3번
	int kor, eng, math;
	double a;
	char s;

	printf("국어, 영어 수학 점수를 입력하세요 : ");
	scanf("%d %d %d", &kor, &eng, &math);
	a = avg(kor, eng, math);
	s = score(a);
	printf("평균 : %.2lf 학점 : %c \n",a,s);
	*/


	//문제4번
	POINT p = { 5,5 };
	printf("합: %d \n",add(p.x, p.y));
	printf("차: %d \n", subtract(p.x, p.y));

	return 0;
}