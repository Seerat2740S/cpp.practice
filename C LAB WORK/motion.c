/*#include<stdio.h>
#include<math.h>
int main(){
    float b,p,n;
    printf("enter the values:");
    scanf("%f%f",&b,&p);

n=(b*b+p*p);
 
 printf("%.2f\n",n);
    
   printf("final velocity is %f",pow(n,0.5));
    return 0;

}*/


#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int sum = 0,i;
    for(i=0;i<=n;i++){
        sum+=i;
        
    }
    printf("sum is %d",sum);
    return 0;
}