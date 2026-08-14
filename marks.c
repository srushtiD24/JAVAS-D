#include<stdio.h>
int main()
{
float m1,m2,m3,tot,avg;

    printf("\nEnter marks of three subjects:");
    scanf("%f%f%f",&m1,&m2,&m3);
    tot=m1 + m2 + m3;
    avg=tot/3;

    if(avg>=80)
       printf("\n YOU GOT Ist CLASS");
    else if(avg>=60 && avg<80)
       printf("\nYOU GOT IInd CLASS");
    else if(avg>=40 && avg<60)
       printf("\nYOU GOT PASS CLASS");
    else 
    ("\nBETTER LUCK NEXT TIME");
    return 0;
}