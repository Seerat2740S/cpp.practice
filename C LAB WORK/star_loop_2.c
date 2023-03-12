#include<stdio.h>
int main()
{
    int i=0,j,n;
    printf("Enter your number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=n;
        while(j<=i)
        {
            printf("%d",j);
            j=j+1;
        }
        printf("\n");
        i=i+j;
    }
    return 0;
}