#include <stdio.h>
int main()
{
    /*
    signed char num1 = 130;
    unsigned char num2 = 130;

    printf("%d \n", num1);
    printf("%d \n", num2);
    */


    //float num1=0.123456;
    //printf("float�� : %f \n", num1);
    //printf("float�� : %.2f \n", num1);

/*
    char val1;
    int val2;

    printf("���� �Է� :");
    scanf("%c", &val1);
    printf("ASCII �ڵ� �� %d �Դϴ�. \n", val1);

    printf("ASCII �ڵ� �� �Է� :");
    scanf("%d", &val2);
    printf("���ڷ� %c�Դϴ�.\n", val2);
*/


    int num1 = 10, num2 = 3;
    double result;

    result=num1/num2;
    printf("��� : %lf \n",result);

    result=(double)num1/num2;
    printf("��� : %lf \n",result);

    result=num1/(double)num2;
    printf("��� : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("��� : %lf \n",result);


    return 0;
}
