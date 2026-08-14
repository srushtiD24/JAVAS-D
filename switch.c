#include<stdio.h>
int main()
{
    int x;

    printf("\nEnter number:");
    scanf("%d",&x);


    if(x==0)
     printf("\nZERO");
    else if(x==1)
     printf("\nONE");
    else if(x==2)
     printf("\nTWO");
    else if(x==3) 
     printf("\nTHREE");
     else if(x==4)
    printf("\nFOUR");
     else if(x==5)
     printf("\nFIVE");
     else if(x==6) 
     printf("\nSIX");
     else if(x==7)
     printf("\nSEVEN");
    else if(x==8)
     printf("\nEIGHT");
     else if(x==9)
     printf("\nNINE");
    
    else
     printf("%d is not a single-digit number");

    return 0;
}






