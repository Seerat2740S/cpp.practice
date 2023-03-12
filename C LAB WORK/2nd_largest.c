#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter the value of a ,b,c,d");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        if(b>c && b>d){
            printf("b is 2nd largest");
        }
        else if(c>b && c>d){
            printf("c is 2nd largest");
        }
        else{
            printf("d is largest");
        }
        printf("\na is greater ");
    }
    else if(b>a && b>c && b>d){
        if(a>c && a>d){
            printf("a is 2nd largest");
        }
        else if(c>a && c>d){
            printf("c is 2nd largest");
        }
        else{
            printf("d is largest");
        }
    }
    else if(c>a && c>b && c>d){
        if(a>b && a>d){
            printf("a is 2nd largest");
        }
        else if(b>a && b>d){
            printf("b is 2nd largest");
        }
        else{
            printf("d is 2nd largest");
        }
    }
    else{
        printf("d is largest");
    }
}
   