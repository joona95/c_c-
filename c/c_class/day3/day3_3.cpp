#include <stdio.h>

int main()
{
    int a = 'a';
    int A = 'A';

    printf("%d \n",a);
    printf("%d \n",A);

    printf("%c \n", a-32);
    printf("%c \n", A+32);


    printf("A = %d, a = %d \n", 'A', 'a');
    char letter = 'a';
    printf("%c\n", letter-32);



    //printf("%s %d \n", "10 + 20 =" ,10+20);

    return 0;
}
