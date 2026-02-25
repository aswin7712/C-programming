//function with argument and no return type
#include<stdio.h>
void sum(int,int);
int main()
{
    int a,b;
    printf("enter a&b");
    scanf("%d%d",&a,&b);
    sum(a,b);
    return 0;
}
void sum(int k,int g)
{
    int c;
    c=k+g;
    printf("sum is %d",c);
    printf("\n%d\t%d",k+1,g+1);
}