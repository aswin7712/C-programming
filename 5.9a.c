#include <stdio.h>
void main()
{
    int x,y;
    printf("enter value of x");
    scanf("%d",&x);
    if(x>=0)
    {
        if(x==0)
        {
            y=0;
        }
        else
        {
            y=1;
        }
    }
    else
    {
        y=-1;
    }
    printf("%d",y);
}