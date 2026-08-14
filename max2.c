#include<stdio.h>
#define MAX(a,b) a>b? a:b
int main()
{
    int a,b,ans;
    printf("\nEnter a number:");
    scanf("%d",&a);
    printf("\nEnter another number:");
    scanf("%d",&b);

    ans=MAX(a,b);
    printf("\nMaximum number is %d",ans);
    return 1;
    }
