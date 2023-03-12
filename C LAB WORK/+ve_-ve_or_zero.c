#include<stdio.h>
int main()
{

    int a,ch,i;
    for(i=0;i<=100;i++)
    {
    printf("Enter your number:");
    scanf("%d",&a);
    printf("Press 1 to check for positive, negative or zero:");
    scanf("%d",&ch);
    
    switch (ch)
    {
    case 1:
        if(a>0)
        {
            printf("Positive\n");
        }
        else if(a<0)
        {
            printf("Negative\n");
        }
        else{
            printf("Zero\n");
        }
        break;
    
    default:
    printf("Integer value daal lawde");
        break;
    }
    }

    return 0;
}