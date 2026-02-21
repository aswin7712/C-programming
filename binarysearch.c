#include <stdio.h>
void main()
{
    int a[100],n,i,s,l,h,m,found=0;
    printf("enter numbers of elements :");
    scanf("%d",&n);
    printf("enter sorted elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter element to search :");
    scanf("%d",&s);
    l=0;
    h=n-1;
    while(l<=h)
    {
        m=(l+h)/2;
        if(a[m]==s)
        {
            printf("element found at index %d",m);
            found++;
            break;
            
        }
        else if(a[m]<s)
        {
            l=m+1;
        }
        else
        {
            h=m-1;
        }
    }
    if(found==0) printf("element not found");
}