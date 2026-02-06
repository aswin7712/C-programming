#include<stdio.h>
void main()
{
    int n,a[100],i,sum=0,prod=1,m,found=0;
    printf("enter the limit of array : ");
    scanf("%d",&n);
    printf("enter array element : ");
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("the element in the position %d is %d \n",i,a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum=sum+a[i];
        prod=prod*a[i];
    }
    printf("sum of the elements is %d",sum);
    printf("\nproduct of the elements is %d",prod);
   
    printf("\nenter element to search : ");
    scanf("%d",&m);
    found = 0;
    for(i = 0; i < n; i++)
    {
        if(m == a[i])
        {   
            printf("Element found at position %d\n", i);
            found++;
        }
    }
    if(found == 0)
    {
        printf("Element not found\n");
    }
}