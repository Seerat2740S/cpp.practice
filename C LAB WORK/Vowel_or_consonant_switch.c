#include<stdio.h>
int main()
{
    char a;
    int ch;
    printf("Enter your alphabet:");
    scanf("%c",&a);
     

    printf("Press 1 to check for alphabet is vowel:\n");
    printf("Press 2 to check for alphabet is consonaant:\n");
    scanf("%d",&ch);
     if(a>='1' && a<='9')
    {
        printf("Alphabet daal na lawde\n");
    }

   


    switch (ch)
    {
    case 1:
    if(a=='a' || a=='i' || a=='e' || a=='o' || a=='u')
    {
        printf("The alphabet is vowel");
    }
        break;
    case 2:
    if(a!='a' || a!='i' || a!='e' || a!='o' || a!='u')
    {
        printf("The alphabet is consonant");
    }
    break;
    
    default:
    printf("Alphabet daal na lawde");
        break;
    }
    

    return 0;
}