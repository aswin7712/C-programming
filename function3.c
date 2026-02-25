//function with argument and return type
#include <stdio.h>
int sum(int,int);
int main()
{
    int a,b,s;
    printf("enter a and b:");
    scanf("%d%d",&a,&b);
    s=sum(a,b);
    printf("sum is %d",s);
    return 0;
}
int sum(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d",c);
    return(c);
}