#include<stdio.h>
int main()
{
    int x,y;
    printf("ENTER x and y coordinates");
    scanf("%d%d",&x,&y);
    if(x>0 && y>0)
    printf("%d Ist Quadrant",x,y);
     else if(x>0 && y<0)
    printf("%d IInd Quadrant",x,y);
    else if(x<0 && y<0)
    printf("%d IIIrd Quadrant",x,y);
    else
    ("%d IVth Quadrant",x,y);
    return 0;
}
