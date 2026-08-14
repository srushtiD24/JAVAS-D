#include<stdio.h>
int main()
{
    int c;
       printf("Enter a number:");
       scanf("%d",&c);
    if(c%5==0)
       printf("%d is divisible by 5",c);
    else
       printf("%d is not divisible by 5",c);
return 0;
}
