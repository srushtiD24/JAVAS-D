#include<stdio.h>

int main()
{
    int a,b,c;
    printf("\nEnter two numbers:");
    scanf("\n%d%d",&a,&b);
    printf("\n before swapping:");
    printf("\n First number:%d",a);
    printf("\n second number:%d",b);
    c=a;
    a=b;
    c=b;
    printf("\n After swapping:");
    printf("\n First number:%d",b);
    printf("\n Second number:%d",a);
    return 0;
}   
