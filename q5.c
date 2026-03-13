#include <stdio.h>
#include <string.h>
struct details
{
    int roll;
    char name[100];
    float mark;
};
void main()
{
    int n,i,j; ;
    struct details student[100];
    struct details dummy;
    printf("Enter number of students:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       printf("Enter details of student %d\n",i+1);
       printf("\nStudent %d\n", i + 1);
        printf("Roll No: "); scanf("%d", &student[i].roll);
        printf("Name: ");    scanf("%s", student[i].name); 
        printf("Marks: ");   scanf("%f", &student[i].mark);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(strcmp(student[j].name,student[j+1].name)>0)
            {
                dummy=student[j];
                student[j]=student[j+1];
                student[j+1]=dummy;
            }
        }
    }
    printf("\nAlphabetical order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%f\n",student[i].roll,student[i].name,student[i].mark);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(student[j].roll>student[j+1].roll)
            {
                dummy=student[j];
                student[j]=student[j+1];
                student[j+1]=dummy;
            }
        }
    }
    printf("\nRoll number order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%f\n",student[i].roll,student[i].name,student[i].mark);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(student[j].mark<student[j+1].mark)
            {
                dummy=student[j];
                student[j]=student[j+1];
                student[j+1]=dummy;
            }
        }
    }
    printf("\nRank wise list\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t\t%s\t\t%f\n",student[i].roll,student[i].name,student[i].mark);
    }
}