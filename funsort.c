#include <stdio.h>
void bubble(int a[10],int);
int main()
{
    int a[100],n,i;
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
    bubble(a,n);
    return 0;
}
void bubble(int a[10], int n)
{
    int i,j,temp;
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