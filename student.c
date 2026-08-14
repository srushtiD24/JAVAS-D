#include<stdio.h>
struct student
{
    int roll;
    char name[20];
    float mks;
};
  int main()
  {
      struct student st[100];
      int n,i;
      printf("\nEnter how many students:");
      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
      printf("\nEnter student %d details:",(i+1));

      printf("\nEnter roll number:");
      scanf("%d",&st[i].roll);
      printf("\nEnter name:");
      scanf("%s",&st[i].name);
      printf("\nEnter marks");
      scanf("%f",&st[i].mks);
      }
      printf("\nAll students details as follows");
  for(i=0;i<n;i++)
      {
          printf("\n%d\t%s\t%f",st[i].roll,st[i].name,st[i].mks);
      }
      return 0;
  }
