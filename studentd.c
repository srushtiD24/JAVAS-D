#include<stdio.h>
struct student
{
    int  roll;
    char name[20];
    float mks;
};

int main()
{
    struct student st1,st2,st3;
     printf("\nENTER STUDENT 1 DETAILS:");
     printf("\nenter roll number:");
     scanf("%d &st1.roll");
     printf("\nenter name:");
     scanf("%s &st1.name");
     printf("\nenter marks:");
     scanf("\n%f &st1.mks");

     printf("\nENTER STUDENT 2 DETAILS:");
     printf("\nenter roll number:");
     scanf("%d &st2.roll");
     printf("\nenter name:");
     scanf("%s &st2.name");
     printf("\nenter marks:");
     scanf("\n%f &st2.mks");

     printf("\nENTER STUDENT 3 DETAILS:");
     printf("\nenter roll number:");
     scanf("%d &st3.roll");
     printf("\nenter name:");
     scanf("%s &st3.name");
     printf("\nenter marks:");
     scanf("\n%f &st3.mks");
     return 0;

}   