#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of a:");
    scanf("%d",&a);
     printf("Enter value of b:");
    scanf("%d",&b);
     printf("Enter value of c:");
    scanf("%d",&c);
    if(a>=b)
    {
        if(a>=c)
        {
            printf("%d is greater",a);
        }
    }
    else if(b>=a)
    {
        if(b>=c)
        {
            printf("%d is greater",b);
        }
    }
    else{
        printf("%d is greater",c);
    }

    

    return 0;
}