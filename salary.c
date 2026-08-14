#include<stdio.h>
int main()
{
int salary;
float tax;
           printf("\nENTER SALARY:");
           scanf("%d",&salary);
    if(salary>=150000)
        tax=0;
    else if(salary>=150000 && salary<300000)
        tax=(salary*20)/100;
    else if(salary>=300000)
        tax = (salary*30)/100;
        printf("\n tax is %f",tax);


            }