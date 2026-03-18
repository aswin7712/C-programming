#include <stdio.h>
#include <math.h>
#define PI 3.14
float diameter(int,int,int,int);
void area(float);
void perimeter(float);
int main()
{
    int x1,x2,y1,y2;
    float d;
    printf("enter X coordinates(x1,x2) : ");
    scanf("%d%d",&x1,&x2);
    printf("enter Y coordinates(y1,y2) : ");
    scanf("%d%d",&y1,&y2);
    d=diameter(x1,x2,y1,y2);
    area(d);
    perimeter(d);
    return 0;
}
float diameter(int x1,int x2,int y1,int y2)
{
    float d;
    d=(float)sqrt(pow((double)(x2 - x1), 2) + pow((double)(y2 - y1), 2));
    printf("diameter=%f",d);
    return d;
}
void area(float d)
{
    float r,a;
    r=d/2.0;
    a=(float)PI*(r*r);
    printf("\nradius=%f\narea=%f",r,a);
}
void perimeter(float d)
{
    float peri,r;
    r=d/2.0;
    peri=(float)2*PI*r;
    printf("\nradius=%f\nperimeter=%f",r,peri);
}