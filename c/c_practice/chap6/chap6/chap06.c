#include <stdio.h>
int main()
{
	/*����1��
	//int num;
	double num;
	printf("�Ǽ��� �Է��ϼ��� : ");
	//scanf("%d", &num);
	scanf("%lf", &num);
	printf("����� �Է��� ���� %d�Դϴ�.\n", (int)num);
	*/

	/*����2��
	//char c=200;
	int c = 200;
	printf("c=%d \n", c);
	*/

	/*����3��
	int i;
	float f;
	double d;
	i = (long)('a' + 1.3); //('a'+1.3)�� ����+�Ǽ�=(�Ǽ�)���� (long)�̵Ǹ鼭 �����ͼսǹ߻� -> long���� int�� �����ͼսǹ߻� 
	f = 2.49 + i; // �Ǽ�+����(int)�� �Ǽ� = float �״��
	d = (double)f*i; //float���� double�� f����ȯ �Ǽ�*���� = �Ǽ��̹Ƿ� double �״��
	*/

	/*����4��
	int c;   //char c;�� �Ұ�� scanf("%d", &c)�� �޴°� �Ұ�?
	printf("input = ");
	scanf("%d", &c);
	printf("�Է��� �ڵ忡 �ش��ϴ� ���ڴ� %c�Դϴ�. \n", c);
	*/

	/*����5��
	//int result;
	double result;
	int input1;
	int input2;

	printf("input 2 numbers = ");
	scanf("%d %d", &input1, &input2);
	//result = input1 / input2;
	result = (double)input1 / input2;
	//printf("������ ��� = %d \n", result);
	printf("������ ��� = %.2lf \n", result);
	*/

	/*����6��
	int r, k;
	double min;
	printf("Ʈ���� ������ : ");
	scanf("%d", &r);
	printf("�ڵ����� �ӷ� : ");
	scanf("%d", &k);
	min = 2 * 3.14 * r / k * 60;
	printf("�ѹ����� �����ϴµ� �ɸ��� �ð��� %.3lf���̴�.",min);
	*/

	int r;
	double a, l;
	printf("���� ������ : ");
	scanf("%d", &r);

	a = 3.14*r*r;
	l = 2 * 3.14*r;
	printf("���� ���� : %.2lf \n", a);
	printf("���� �ѷ� : %.2lf \n", l);

	return 0;
}