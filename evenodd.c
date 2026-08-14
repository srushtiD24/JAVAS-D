#include<stdio.h>
int main()
{
    int b;
    printf("\nEnter a number:");
    scanf("\n %d",&b);
    if(b%2==0)
    printf("%d is even number",b);
    else
    printf("%d is odd number",b);
    return 0;

}
