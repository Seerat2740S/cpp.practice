#include<stdio.h>
int main()
{
    int n,i=1,j,s,q,p;

    printf("Enter your value:");
    scanf("%d",&n);
    while(i<=n)
    {
        j=1;
        while(j<n-i+1)
        {
            printf(" ");
            j=j+1;
        }
        s=1;
        while(s<=i)
        {
            printf("* "); //to make triangular pattern give a space.
            s=s+1;
        }
        printf("\n");
       
    {
        p=n;
        while(p>n-i+1)
        {
            printf(" ");
            p=p-1;
        }
        q=n;
        while(q>=i)
        {
            printf("* "); //to make triangular pattern give a space.
            q=q-1;
        }
        printf("\n");
        i=i+1;
    }
       
    
    }
    return 0;
}