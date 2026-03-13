#include <stdio.h>
void main()
{
    int marks[3],i,j,v,average;
    printf("enter your marks\n");
    for(i=0;i<3;i++)
    {
        printf("mark of sub %d out of 100:",i+1);
        scanf("%d",&marks[i]);
    }
    if(marks[0]>=marks[1])
    {
        if(marks[0]>=marks[2])
        {
            printf("sub1 is largest mark");
        }
        else
        {
            printf("sub3 is largest mark");
        }
    }
    else
    {
        if(marks[1]>=marks[2])
        {
            printf("sub2 is largest");
        }
        else
        {
            printf("sub3 is largest");
        }
    }
    if(marks[0]<=marks[1] && marks[0]<=marks[2])
    {
        printf("\nsub1 is smallest");
    }
    else if(marks[1]<=marks[0] && marks[1]<=marks[2])
    {
        printf("\nsub2 is smallest");
    }
    else
    {
        printf("\nsub3 is smallest");
    }
    average=(marks[0]+marks[1]+marks[2])/3;
    v=(average>=50)?v=1:0;
    printf("\nv is %d",v);
}