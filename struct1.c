#include<stdio.h>
 struct student
{
    int rollno;
    char name[20];
    float marks;
};
int main()
{
 struct student st1,st2;

      printf("\nEnter student 1 details");
      printf("\nEnter roll number:");
      scanf("%d",&st1.rollno);
      printf("\nEnter name:");
      scanf("%s",&st1.name);
      printf("\nEnter marks:");
      scanf("%f",&st1.marks);

    printf("\nEnter student 2 details");
      printf("\nEnter roll number:");
      scanf("%d",&st2.rollno);
      printf("\nEnter name:");
      scanf("%s",&st2.name);
      printf("\nEnter marks:");
      scanf("%f",&st2.marks);


      printf("ROLL\tNAME\tMARKS\n");
      printf("%d\t%s\t%f\n,st1.rollno,st1.name,st1.marks");
      printf("$d\t%s\t%f\n,st2.rollno,st2.name,st2.marks");
      

      return 0;

}

