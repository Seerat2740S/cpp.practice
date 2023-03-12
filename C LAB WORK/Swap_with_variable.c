#include<stdio.h>
int main()
{
    int a=10,b=20;
    int c;
    c=a;
    a=b;
    b=c;
    printf("Value of a is:%d\n",a);
    printf("Value of b is:%d\n",b);

    return 0;
}