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
    //printf("float형 : %f \n", num1);
    //printf("float형 : %.2f \n", num1);

/*
    char val1;
    int val2;

    printf("문자 입력 :");
    scanf("%c", &val1);
    printf("ASCII 코드 값 %d 입니다. \n", val1);

    printf("ASCII 코드 값 입력 :");
    scanf("%d", &val2);
    printf("문자로 %c입니다.\n", val2);
*/


    int num1 = 10, num2 = 3;
    double result;

    result=num1/num2;
    printf("결과 : %lf \n",result);

    result=(double)num1/num2;
    printf("결과 : %lf \n",result);

    result=num1/(double)num2;
    printf("결과 : %lf \n",result);

    result=(double)num1/(double)num2;
    printf("결과 : %lf \n",result);


    return 0;
}
