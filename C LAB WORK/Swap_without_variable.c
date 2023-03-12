#include<stdio.h>
int main()
{
    int a=100,b=2;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d\n",b);

    return 0;
}