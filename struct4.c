#include<stdio.h>
 typedef struct student
{
    int roll;
    char name[20];
    float mks;
}stud;
  int main()
  {
      stud st={11,"srushti",89};
      stud *p;
      p=&st;
       
       printf("\nRoll number : %d",p->roll);
       printf("\nName : %s",p->name);
       printf("\nMarks : %f",p->mks);
       return 0;

  }