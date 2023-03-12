#include<stdio.h>
#include<math.h>
int main()
{
    float h,b,p,n,f;
    printf("Enter your base:");
    scanf("%f",&b);
    printf("Enter your perpendicular:");
    scanf("%f",&p);
    n=pow(b,2) + pow(p,2);
    f=pow(n,0.5);

    printf("Your height is%.2f",f);

    return 0;
}
