#include<stdio.h>
#include<string.h>
typedef struct book 
{
    char name[20];
    char author[40];
    float price;

}book;

void fun(book *b)
 {
    b->price=600;
    strcpy(b->name,"DBMS");
 }
  int main()
  {
      book b1 = {"C-programming","denis",400};
      fun(&b1);
      printf("\nName : %s",b1.name);
      printf("\nAuthor : %s",b1.name);
      printf("\nPrice : %f",b1.name);
      return 0;

  }
