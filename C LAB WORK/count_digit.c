#include<stdio.h>
int main()
{
    int n,i=0,len=0;
    for(i;i<=100;i++)
    {
   
    printf("Enter your number:");
    scanf("%d",&n);
    while(n!=0)
    {
        len=len+1;
        n=n/10;
    }
    printf("Lenght of interger:%d\n",len);
    return 0;
}
}