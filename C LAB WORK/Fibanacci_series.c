#include<stdio.h>
int main()
{
    int n,i,a=0,b=1,sum;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n==1)
    {
        printf("%d",a);
    }
    else if(n==2)
    {
        printf("%d%d",a,b);
    }
    else if(n>2)
    {
    printf("%d\t%d\t",a,b);
    for(i=3;i<=n;i++)
    {
       sum=a+b;
       a=b;
       b=sum;
       printf("%d\t",sum); //returns the series to the number
    }
    printf("\n%d",sum);  //gives the last value of the series.
    }
    return 0;
}