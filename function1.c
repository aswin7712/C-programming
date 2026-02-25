//function with no argument and no return type
#include <stdio.h>
void sum();
int main()
{
    sum();
    printf("hai");

    return 0;
}
void sum()
{
    int a,b,c;
    printf("enter a and b :");
    scanf("%d%d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}