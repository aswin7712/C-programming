#include <stdio.h>
void main()
{
	char a[100],b[100];
	int i=0;
	printf("enter first string :");
	scanf(" %[^\n]",a);
	printf("enter second string :");
	scanf(" %[^\n]",b);
	while(a[i]!='\0')
	{
		b[i]=a[i];
		i++;
	}
	b[i]='\0';
	printf("after copying \n a is %s\n b is %s",a,b);
}