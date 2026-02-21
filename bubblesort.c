#include <stdio.h>
void main()
{
    int a[100],n,i,j,pass,temp;
    printf("enter number of elements :");
    scanf("%d",&n);
    printf("enter elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }    
    }
    printf("\n sorted array\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}