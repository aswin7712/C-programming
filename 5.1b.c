#include <stdio.h>
void main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	if(n%2==0)
	{
		printf("The number %d you have entered is even!!",n);
	}
	else
	{
		printf("The number %d you have entered is odd!!",n);
	}
}