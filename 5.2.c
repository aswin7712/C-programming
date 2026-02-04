#include <stdio.h>
void main()
{
	printf("find the number of and sum of all integers greater than 100 and less than 200 that are divisible 7");
	int n,count,sum;
	count=0;
	sum=0;
	for(n=101;n<=200;n++)
	{
		if(n%7==0)
		{
			count=count+1;
			sum=sum+n;
		}
	}
	printf("\n the number of integers greater than 100 and less than 200 is %d",count);
	printf("\n the sum of integers greater than 100 and less than 200 is %d",sum);
}