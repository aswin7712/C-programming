#include <stdio.h>
void main()
{
	int n,i,m,p,c,total,totalmp;
	printf("Enter the number of candidates :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\ncandidate%d",i);
		printf("\nEnter mark in Maths out of 100 : ");
		scanf("%d",&m);
		printf("Enter mark in Physics out of 100 : ");
		scanf("%d",&p);
		printf("Enter mark in chemistry out of 100 : ");
		scanf("%d",&c);
		total=m+p+c;
		totalmp=m+p;
		if(m>=60&&p>=50&&c>=40&&(total>=200||totalmp>=150))
		{
			printf("Eligible!!\n");
		}
		else
		{
			printf("Not Eligible!!\n");
		}
	}
} 