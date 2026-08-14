#include<stdio.h>
void main()
{
    int x[10]={1,2,3,4,5,6,7,8,9,10}
    int *ptr;
    ptr=&x[5];
    printf("*ptr=%d\n",*(ptr));
    printf("*ptr+3=%d\n",*(ptr+3));
    printf("*ptr-4=%d\n",*(ptr-4));
}   