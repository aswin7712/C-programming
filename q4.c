#include <stdio.h>
void SaddlePoint(int,int,int [100][100]);
void secondLargest(int,int,int [100][100]);
int main()
{
    int m,n,i,j,matrix[100][100];
    printf("Enter rows and columns: ");
    scanf("%d %d",&m,&n);
    printf("Enter matrix elements:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    printf("the matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    SaddlePoint(m,n,matrix);
    secondLargest(m,n,matrix);
    return 0;
}
void SaddlePoint(int m,int n,int matrix[100][100])
{
    int found=0,i,j,k,min_row,is_saddle;
    for(i=0;i<m;i++) 
    {
        min_row=matrix[i][0];
        for(j=1;j<n;j++)
        {
            if(matrix[i][j]<min_row)
            {
                min_row=matrix[i][j];
            }
        }
        for(j=0;j<n;j++) 
        {
            if(matrix[i][j]==min_row) 
            {
                is_saddle=1;
                for(k=0;k<m;k++)
                {
                    if(matrix[k][j]>min_row) 
                    {
                        is_saddle=0;
                        break;
                    }
                }
                if (is_saddle)
                {
                    printf("Saddle Point = %d\n",min_row);
                    found=1;
                }
            }
        }
    }
    if(!found)printf("No saddle point exists.\n");
}
void secondLargest(int m,int n,int matrix[100][100]) 
{
    int largest, secondLargest;
    int i, j, flag = 0;
    largest = matrix[0][0];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]>largest) 
            {
                largest=matrix[i][j];
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(matrix[i][j]!=largest) 
            {
                if(flag==0) 
                {
                    secondLargest=matrix[i][j];
                    flag=1;
                } 
                else if(matrix[i][j]>secondLargest) 
                {
                    secondLargest=matrix[i][j];
                }
            }
        }
    }

    if(flag==0) 
    {
        printf("No distinct second largest element (all elements are equal).\n");
    } 
    else 
    {
        printf("Second Largest Element = %d\n", secondLargest);
    }
}
