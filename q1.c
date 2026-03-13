#include <stdio.h>
#include <math.h>
#define PI 3.14
double diameter(int,int,int,int);
void perimeter(int d);
void area(int d);
void main()
{
    int x1,x2,y1,y2;
    double d;
    printf("enter coordinates:");
    scanf("%d%d",&x1,&x2);
    printf("enter coordinates:");
    scanf("%d%d",&y1,&y2);
    d=diameter(x1,x2,y1,y2);
    area(d);
    perimeter(d);
}
double diameter(int x1,int x2,int y1,int y2)
{
    double d;
    d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    printf("the diameter is %lf\n",d);
    return d;
}
void area(int d)
{
    double r,a;
    r=d/2;
    a=PI*(r*r);
    printf("area of the triangle is %lf\n",a);
}
void perimeter(int d)
{
    double p,r;
    r=d/2;
    p=2*PI*r;
    printf("perimeter is %lf",p);
}