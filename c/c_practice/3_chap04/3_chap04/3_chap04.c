#include <stdio.h>
#include <stdlib.h>

void allocate(int i);

int main()
{
	/*����2��
	int i;
	printf("�ʿ��� �޸� ���� : ");
	scanf("%d", &i);
	allocate(i);
	*/

	//����3��
	int i, j;
	int* ip = NULL;
	char* cp = NULL;
	float* fp = NULL;

	printf("�ʿ��� �޸� ���� : ");
	scanf("%d", &i);
	printf("���� ������ ���� (1)int, (2)char, (3)float : ");
	scanf("%d", &j);

	if (j == 1)
	{
		ip = (int*)calloc(i, sizeof(int));
		printf("�޸� ���� �ּ� : %d \n", ip);
		printf("�޸� �� : %d \n", *ip);
		printf("�Ҵ�� ��ü �޸� ���� : %d ����Ʈ\n", i * sizeof(int));
	}
	else if (j == 2)
	{
		cp = (char*)calloc(i, sizeof(char));
		printf("�޸� ���� �ּ� : %d \n", cp);
		printf("�޸� �� : %d \n", *cp);
		printf("�Ҵ�� ��ü �޸� ���� : %d ����Ʈ \n", i * sizeof(char));
	}
	else if (j == 3)
	{
		fp = (float*)calloc(i, sizeof(float));
		printf("�޸� ���� �ּ� : %d \n", fp);
		printf("�޸� �� : %d \n", *fp);
		printf("�Ҵ�� ��ü �޸� ���� : %d ����Ʈ \n", i * sizeof(float));
	}
	else
		printf("�߸��� �Է� \n");
	return 0;
}

void allocate(int i)
{
	int* p = (int*)malloc(sizeof(int)*i);

	printf("%d�� ������ �Ҵ��Ͽ����ϴ� \n",i);

}