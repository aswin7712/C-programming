#include <stdio.h>
void main()
{
    int n,i,m;
    int q=0,w=0,e=0,r=0;
    printf("enter number of students");
    scanf("%d",&n);
    printf("enter marks in between0-100");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m>=80)
        {
            q++;
        }
        else if(m>=60)
        {
            w++;
        }
        else if(m>=41)
        {
            e++;
        }
        else 
        {
            r++;
        }
    }
    printf("81 to 100 is %d\n",q);
    printf("61 to 80 is %d\n",w);
    printf("41 to 60 is %d\n",e);
    printf("0 to 40 is %d\n",r);
    
    printf("\nmore than 80 is %d\n",q);
    printf("more than 60 is %d\n",q+w);
    printf("more than 40 is %d\n",q+w+e);
    printf("40 or lesser is %d",r);
    
}