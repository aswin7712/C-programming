#include <stdio.h>
void main()
{
    float a,b,m;
    float c,d,n;
    float x1,x2,deno;
    printf("enter value of a,b,c,d,m,n respectively : ");
    scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&m,&n);
    deno=(a*d)-(c*b);
    if(deno==0)
    {
        printf("invalid");
    }
    else
    {
        x1=((m*d)-(b*n))/deno;
        x2=((n*a)-(m*c))/deno;
         printf("x1=%f\tx2=%f",x1,x2);
    }
}