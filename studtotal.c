#include<stdio.h>
struct student
{
    int rollno;
    char name[20];
    float mks;
    int nos;
    float total;
    float avg;
};
 int main()
 {
     struct student st[100];
     int n,i,j;
     printf("\nEnter how many students:");
     scanf("%d",&n);

      for(i=0;i<n;i++)
      
      {
          printf("\nEnter student %d details:",(i+1));
          printf("\nEnter roll number:");
          scanf("%s",&st[i].rollno);
          printf("\nEnter name:");
          scanf("%d",&st[i].name);
          printf("\nEnter how many subjects:");
          scanf("%d",&st[i].nos);

      for(j=0;j<n;j++)
          {
              printf("\nEnter marks:");
              scanf("%f",&st[i].mks[j]); 
              
              st[i].total = st[i].total + st[i].mks[j];
          }
             st[i].avg=st[i].total/st[i].nos;
      }
             printf("\nAll student details are as follows:");

             for(i=0;i<n;i++)
             {
                 printf("\n%d\t%s\t%f\t%f",st[i].rollno,st[i].name,st[i].total,st[i].avg);

             }
              return 0;
      }
 