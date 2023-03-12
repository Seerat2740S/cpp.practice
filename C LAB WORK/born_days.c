#include<stdio.h>
int main()
{
    int ndays,y,d,m;
    printf("Enter your days:");
    scanf("%d",&ndays);
    y=(int)ndays/365;
    printf("years:%d\n",y);
    m=(int)ndays/30;
    printf("months:%d\n",m/12);
    d=ndays-(m*30);
    printf("Days:%d",d);



}