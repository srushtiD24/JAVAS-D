#include<stdio.h>
 int a;
 int *p;
 a=30;
 p=&a;
 {
  printf("%d",a);
  printf("%d",&a);
  printf("%d",p);
  printf("%d",*p);
  return 0;
 }
