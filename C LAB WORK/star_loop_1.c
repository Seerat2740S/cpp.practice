#include<stdio.h>
int main()
{
    int i=1,n,j;
    printf("Enter your number:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<=n)
        {
            printf("*");
            j=j+1;
        }
        printf("\n");
        i=i+1;
    }
    return 0;
}