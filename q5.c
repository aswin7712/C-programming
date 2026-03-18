#include <stdio.h>
#include <string.h>
struct details
{
    char name[100];
    int rollnum;
    int mark;
};
void alphabet(struct details student[],int);
void roll(struct details student[],int);
void rank(struct details student[],int);
void main()
{
    int n,i;
    struct details student[100];
    printf("Enter number of students : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nStudent %d\n",i+1);
        printf("Name : ");
        scanf(" %[^\n]",student[i].name);
        printf("Roll No. : ");
        scanf("%d",&student[i].rollnum);
        printf("Marks Obtained : ");
        scanf("%d",&student[i].mark);
    }
    alphabet(student,n);
    roll(student,n);
    rank(student,n);
}
void alphabet(struct details student[100],int n)
{
    int i,j;
    struct details dummy;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(strcmp(student[j].name,student[j+1].name)>0)
            {
                dummy=student[j];
                student[j]=student[j+1];
                student[j+1]=dummy;
            }
        }
    }
    printf("\nAlphabetic Order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",student[i].rollnum,student[i].name,student[i].mark);
    }
}
void roll(struct details student[100],int n)
{
    int i,j;
    struct details dummy;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(student[j].rollnum>student[j+1].rollnum)
            {
                dummy=student[j];
                student[j]=student[j+1];
                student[j+1]=dummy;            }
        }
    }
    printf("\nRoll Number Order\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",student[i].rollnum,student[i].name,student[i].mark);
    }
}
void rank(struct details student[100],int n)
{
    int i,j;
    struct details dummy;
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
    printf("\nRank wise list(high to low\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",student[i].rollnum,student[i].name,student[i].mark);
    }
}