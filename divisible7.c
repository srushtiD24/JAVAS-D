#include<stdio.h>
int main()
{
    int d;
    printf("\nEnter a number:");
    scanf("\n%d",&d);
    if(d%5 == 0 && d%7 == 0)
    printf("\n%d is divisible by 5 and 7",d);
    else 
    printf("\n%d is not divisible by 5 and 7",d);
    return 0;
}   
