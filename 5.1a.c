#include <stdio.h>
void main()
{
	int n;
	printf("enter a number : ");
	scanf("%d",&n);
	switch(n%2)
	{
	case 0:
		printf("The number %d you have entered is even!!",n);
		break;
	case 1:
	case -1:		
		printf("The number %d you have entered is odd!!",n);
		break;
	}
}
	