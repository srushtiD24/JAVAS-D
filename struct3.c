#include<stdio.h>
#include<string.h>

struct person
{
    int age;
    char name[20];
    char addr[40];
    struct
    {
        int roll;
        float mks;

    };
    int uid;

}
int main()
{
    person p1; 
    person p2 = {20,"abcd","mumbai",{123,90},5455};

}