#include<stdio.h>
int main()
{
    char ch;
    printf("Enter your character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
    {
        printf("Alphbet");
    }
    else if(ch>='0' && ch<='9')
    {
        printf("Digit");
    }
    else{
        printf("Special character");
    }

    return 0;
}