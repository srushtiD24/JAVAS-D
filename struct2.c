#include<stdio.h>
#include<string.h>
struct book
{
    int bid;
    char name[40];
    float prize;

};
    int main()
    {
    struct book b1={21,"HARRY POTTER",500},b2={31,"KITE RUNNER",600},b3={41,"NARNIA",1000};
     
     printf("\nEnter Book 1 details:");
     printf("\nID : %d",b1.bid);
     printf("\nNAME : %s",b1.name);
     printf("\nPRIZE : %f",b1.prize);

     printf("\nEnter Book 2 details:");
     printf("\nID : %d",b2.bid);
     printf("\nNAME : %s",b2.name);
     printf("\nPRIZE : %f",b2.prize);

     return 0;

    }



    