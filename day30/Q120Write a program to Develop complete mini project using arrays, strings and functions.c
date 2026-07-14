#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    float marks;
};

void display(struct Student s[], int n)
{
    int i;

    printf("\n----- Student Report -----\n");
    printf("Roll\tName\tMarks\n");

    for(i = 0; i < n; i++)
    {
        printf("%d\t%s\t%.2f\n",
               s[i].roll,
               s[i].name,
               s[i].marks);
    }
}

float average(struct Student s[], int n)
{
    int i;
    float sum = 0;

    for(i = 0; i < n; i++)
        sum += s[i].marks;

    return sum / n;
}

int main()
{
    struct Student s[100];
    int n, i;

    printf("Enter number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf("%s", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    display(s, n);

    printf("\nAverage Marks = %.2f", average(s, n));

    return 0;
}