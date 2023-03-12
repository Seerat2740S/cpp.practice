#include<stdio.h>
int main()
{
    int i,sum;
    i=0;
    while(i<=10)
    {
        sum=sum+i;
        i++;
    }
    printf("Sum of n natural numbers:%d",sum);

    return 0;
}