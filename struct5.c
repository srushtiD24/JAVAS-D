#include<stdio.h>
struct employee
{
    int id;
    float salary;

};
void update(struct employee *p)
 {
   p->salary=p->salary,10000;
 }

int main()
 {
    struct employee e1={222,21000};

    printf("\nBefore UPDATE");
    printf("\nID : %d",e1.id);
    printf("\nSALARY : %f",e1.salary);

 update(&e1);
    
    printf("\nAfter UPDATE");
    printf("\nID : %d",e1.id);
    printf("\nSALARY : %f",e1.salary);
 }