#include <stdio.h>
//����1��
#include "myheader.h"
//����2��
#define ADD(x,y) x+y
//����3��
#include "score.h"
//����4��
#include "point.h"

int main()
{
	/*����1��
	printf("�� : %d \n",plus(3, 5));
	printf("�� : %d \n",minus(3, 5));
	printf("�� : %d \n",multiply(3, 5));
	printf("������ : %lf \n",divide(3, 5));
	*/

	/*����2��
	int x = 5;
	int y = 5;
	printf("x+y�� %d �Դϴ�. \n", ADD(x, y));
	*/

	/*����3��
	int kor, eng, math;
	double a;
	char s;

	printf("����, ���� ���� ������ �Է��ϼ��� : ");
	scanf("%d %d %d", &kor, &eng, &math);
	a = avg(kor, eng, math);
	s = score(a);
	printf("��� : %.2lf ���� : %c \n",a,s);
	*/


	//����4��
	POINT p = { 5,5 };
	printf("��: %d \n",add(p.x, p.y));
	printf("��: %d \n", subtract(p.x, p.y));

	return 0;
}