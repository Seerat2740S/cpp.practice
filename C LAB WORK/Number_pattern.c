#include<stdio.h>
int main()
{
    int n,i=1,j;
    printf("Enter your number:");
    scanf("%d",&n);
    while(i<=n)
    {
       j=1;
       while(j<=n)
       {
        printf("%d ",i*j);
        j=j+1;
       }
       i=i+1;
       printf("\n");
    }
    return 0;
}