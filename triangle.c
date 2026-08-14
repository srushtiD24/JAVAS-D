#include<stdio.h>
int main()
{
int a,b,c;
       printf("ENTER THREE NUMBERS:");
       scanf("%d%d%d",&a,&b,&c);
    if((a+b)>c||(b+c>a||(a+c>b)))
        printf("THE TRIANGLE IS VALID",a,b,c);
    else
        printf("THE TRIANGLE IS INVALID",a,b,c);
    return 0;
}