#include<stdio.h>
int main()
{
   float n,bill;
   printf("Enetr your units:");
   scanf("%f",&n);
    if(n<=50 && n>=0)
    {
        bill=n*7;
        printf("Your bill is:%.2f",bill);
    }
    else if(n<=150 && n>50)
    {
        bill=n*9;
        printf("Your bill is:%.2f ",bill);
    }
    else if(n<=250 && n>=150)
    {
        bill=n*12;
        printf("Your bill is:%.2f",bill);
    }
    else if(n>250 && n<=700)
    {
        bill=n*15;
        printf("Your bill is:%.2f",bill);
    }
    else{
        printf("teri aukat se bahar hai bill lawde");
    }
    return 0;
}