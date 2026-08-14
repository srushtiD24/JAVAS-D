#include<stdio.h>
int main()
{
    char ch;
        printf("\nEnter a character:");
        scanf("%c",&ch);
        if(ch>=65 && ch>=90||ch>=97 && ch>=122)
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    {
        printf("\n%c is a vowel",ch);
    }
    else
    {
        printf("\n%c is a consonant",ch);
    }
    else 
        printf("\n%c is not a alphabet",ch);
    return 1;

    }