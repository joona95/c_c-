#include <stdio.h>
int main()
{

    int *ptr;
    int a[4] = {1,2,3,4};
    ptr=a;
    printf("%d, %d \n", *ptr, *(ptr+2));
    //1) 1,3


    /*
    int *ptr;
    int a[4]={11,22};  //={11,22,0,0}; 묵시적 초기화
    ptr=a;
    printf("%d, %d \n", *ptr, *(ptr+2));
    //2) 11, 0
    */

    /*
    int *ptr;
    int a[2][2]={{1},{3,4}}; //={{1,0},{3,4}} 묵시적 초기화
    ptr = a[0];
    printf("%d, %d \n", *ptr, *(ptr+2));
    //3)1, 3
    */

    /*
    int a[4] = {10,20,30,40};
    printf("%d %d %d\n", *a, *(a+2), *a+3);
    */


    /*int array[3]={10,20,30};
    int* p=NULL;
    p=array;

    //*연산자를 붙임
    printf("%d %d %d \n", *p, *(p+0), *&p[0]);
    printf("%d %d \n", *(p+1), *&p[1]);
    printf("%d %d \n", *(p+2), *&p[2]);
    */

    return 0;
}
