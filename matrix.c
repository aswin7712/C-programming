#include <stdio.h>
int main()
{
    	int a[100][100],i,j,m,n,sum=0,diasum=0,upsum=0,lowsum=0,rowsum,colsum;
    	printf("enter row and column of matrix :");
    	scanf("%d%d",&m,&n);
    	printf("enter matrix elements\n");
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		printf(" enter element of [%d][%d] :",i,j);
            		scanf("%d",&a[i][j]);
        	}
    	}
    	printf("the matrix is\n");
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{	
            		printf("%d\t",a[i][j]);
        	}
        	printf("\n");
    	}
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		sum = sum+a[i][j];
        	}
    	}
    	printf("\n the sum of the elements in the matrix is %d",sum);
    	printf("\n the diagonal elements are");
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		if(i==j)
            		{
                		printf(" %d,",a[i][i]);
                		diasum=diasum+a[i][i];
            		}
        	}
    	}
    	printf("\nthe sum of diagonal elements are %d",diasum);
    	printf("\nupper triangular elements");
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		if(i<j)
            		{
                		printf(" %d\t",a[i][j]);
                		upsum=upsum+a[i][j];
            		}
        	    
        	}
    	}
    	printf("\nsum of upper triangular elements are %d",upsum);
    	printf("\nlower triagular elements");
    	for(i=0;i<m;i++)
    	{
        	for(j=0;j<n;j++)
        	{
            		if(i>j)
            		{
                		printf(" %d\t",a[i][j]);
                		lowsum=lowsum+a[i][j];
            		}
        	}
    	}
    	printf("\nsum of lower triangular elements are %d",lowsum);
    	printf("\nthe transpose of the matrix is\n");
    	for(i=0;i<n;i++)
    	{
        	for(j=0;j<m;j++)
        	{
            		printf("%d\t",a[j][i]);
        	}
        	printf("\n");
    	}
	for(i=0;i<m;i++)
	{
	    rowsum=0;
		for(j=0;j<n;j++)
		{
			rowsum=rowsum+a[i][j];
		}
		printf("%d row sum is %d\n",i+1,rowsum);
	}
	for(i=0;i<n;i++)
	{
	    colsum=0;
	    for(j=0;j<m;j++)
	    {
	        colsum=colsum+a[j][i];
	    }
	    printf("%d column sum is %d\n",i+1,colsum);
	}
	return 0;	
}