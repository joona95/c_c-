#include <stdio.h>
int main()
{
	/*1������
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

	/*2������
	int a, b;
	printf("input : ");
	scanf("%d", &a);
	printf("input : ");
	scanf("%d", &b);
	(a == b) ? printf("����\n") :
		(a > b) ? printf("Smaller Number : %d \n", b) : printf("Smaller Number : %d \n", a);
	*/

	/*3������
	int x = 3, y = 5, z = 3, k = 2;
	int a;
	a = x < y || x < z && z < k;
	printf("��� ��1 a : %d \n", a); 
	a = (x < y || x < z) && z < k;
	printf("��� ��2 a : %d \n", a);
	//&&�� ||���� ������ �켱����
	*/

	/*4������
	int a, b, c;
	printf("���� �Է� : ");
	scanf("%d", &a);
	printf("���� �Է� : ");
	scanf("%d", &b);
	printf("���� �Է� : ");
	scanf("%d", &c);

	(a > b) && (a > c) ? printf("Max : %d \n", a) :
		(b > a) && (b > c) ? printf("Max : %d \n", b) : printf("Max : %d \n", c);
	*/
	
	/*5������
	int won = 1120;
	int d;
	printf("dollar : ");
	scanf("%d", &d);
	printf("won : %d \n", d*won);
	*/

	/*6������
	int live = 100;
	int day;
	int smoke;
	printf("�Ϸ翡 ��� �� ���Ǿ� 20�Ⱓ �ǿ��ٸ� ?");
	scanf("%d", &day);
	smoke = 365 * 20 * day * 2;
	live = live - (double)smoke/60/24/365;
	printf("����� ������ %d���̰�, %d����� �� �� �ִ�.", smoke, live);
	*/

	/*7������
	int a,b,c,d;
	int num;
	printf("0000~1111 ������ 2���� �Է� : ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	num = d * 1 + c * 2 + b * 4 + a * 8;
	printf("10���� : %d\n", num);
	*/

	/*8������
	int hour, min, sec;
	int time;
	printf("����ð�(��) : ");
	scanf("%d", &hour);
	printf("����ð�(��) : ");
	scanf("%d", &min);
	printf("����ð�(��) : ");
	scanf("%d", &sec);
	time = hour * 60 * 60 + min * 60 + sec;
	printf("���� 00�� 00�� 00�� �������� %d�� �귶��.\n", time);
	*/

	/*9������
	int pound = 150;
	double kg;
	const double P = 0.45;
	kg = P * pound;
	printf("�а��� %d�Ŀ��� %.2lf kg�̴�. \n", pound, kg);
	*/

	/*10������
	const double F = 30.48;
	int feet = 15000;
	double m;
	m = F * feet / 100;
	printf("����Ⱑ �� %d ��Ʈ ����� ���� �ִٸ�, ���󿡼� %.2lf m ������ �ִ�. \n", feet, m);
	*/


	return 0;
}