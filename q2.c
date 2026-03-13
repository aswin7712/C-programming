#include <stdio.h>

void findLargest(int marks[]);
void findSmallest(int marks[]);
int calculateResult(int marks[]);

int main()
{
    int marks[3], i, v;
    
    printf("Enter your marks for 3 subjects:\n");
    for(i = 0; i < 3; i++)
    {
        printf("Subject %d: ", i + 1);
        scanf("%d", &marks[i]);
    }

    
    findLargest(marks);
    findSmallest(marks);
    v = calculateResult(marks);

    printf("\nResult code (v) is: %d\n", v);

    return 0;
}


void findLargest(int marks[])
{
    printf("\n--- Largest Check ---");
    if (marks[0] >= marks[1]) 
    {
        if (marks[0] >= marks[2]) 
        {
            printf("\nSub1 is largest (%d)", marks[0]);
        }
        else 
        {
            printf("\nSub3 is largest (%d)", marks[2]);
        }
    }
    else 
    {
        if (marks[1] >= marks[2]) 
        {
            printf("\nSub2 is largest (%d)", marks[1]);
        }
        else 
        {
            printf("\nSub3 is largest (%d)", marks[2]);
        }
    }
}
void findSmallest(int marks[])
{
    printf("\n--- Smallest Check ---");
    if (marks[0] <= marks[1] && marks[0] <= marks[2])
    {
        printf("\nSub1 is smallest (%d)", marks[0]);
    }
    else if (marks[1] <= marks[0] && marks[1] <= marks[2])
    {
        printf("\nSub2 is smallest (%d)", marks[1]);
    }
    else
    {
        printf("\nSub3 is smallest (%d)", marks[2]);
    }
}

int calculateResult(int marks[])
{
    double average = (marks[0] + marks[1] + marks[2]) / 3.0;
    return (average >= 50) ? 1 : 0;
}