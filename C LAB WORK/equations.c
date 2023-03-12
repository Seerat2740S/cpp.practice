#include<stdio.h>
#include<math.h>
int main()
{
    float u,a,t,b,c,p;
    scanf("%f%f%f%f%f%f",&u,&a,&t,&b,&c,&p);
    printf("Output is:%f\n",u+a*t);
    printf("Output is:%f\n",u*t+(0.5)*a*t*t);
    printf("Output is:%f\n",2*a+pow(b,0.5)+9*c);
    printf("Output is:%f\n",pow(pow(b,2)+pow(p,2),0.5));


    return 0;
}