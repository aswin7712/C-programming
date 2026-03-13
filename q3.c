#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
    float d,x,sinx=0,term,cosx=0;
    int i=1;
    printf("enter value of x:");
    scanf("%f",&d);
    x=d*(3.14/180);
    printf("%f degree = %f rad\n",d,x);
    term=x;
    while(fabs(term)>0.000001)
    {
        sinx=sinx+term;
        i=i+2;
        term=-term*x*x/(i*(i-1));
    }
    printf("sin(%f) is %f\n",d,sinx);
    term=1;
    i=0;
    while(fabs(term)>0.000001)
    {
        cosx=cosx+term;
        i=i+2;
        term=-term*x/(i*(i-1));
    }
    printf("cos(%f) is %f\n",d,cosx);
    int n=1;
    float sum=0,sterm;
    do{
        sterm=pow(1.0/n,n);
        sum=sum+sterm;
        n++;
    }while(sterm>1e-12);
    printf("sum series : %f\n",sum);
}