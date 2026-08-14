#include<stdio.h>
int main()
{
    int i=1,sum=0,n;
      printf("\nEnter a number");
      scanf("%d",&n);
        while(i<=n)
     {
         sum=sum+i;
         i++;
     }

      printf("\nTotal is %d",sum);
      return 0;
} 