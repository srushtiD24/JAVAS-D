#include<stdio.h>
int main()
{
int a,b,c;
        printf("\nENTER THREE NUMBERS:");
        scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("\n%d is the greatest",a);
    else if(b>a && b>c)
        printf("\n\n%d is the greatest",b);
    else if (c>a && c>b)
       printf("\n%d is the greatest",c);
    return 0;

}