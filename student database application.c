#include <stdio.h>
#include <string.h>

struct student
{
    int roll_number;
    char name[50];
    float cut_off;
    char city[50];
    char dream[50];
};

void read_input(struct student s[], int count);
void display_output(struct student s[], int count);

int main()
{
    int count;

    printf("Enter the student count: ");
    scanf("%d", &count);

    if (count <= 0 || count > 100)
    {
        printf("Invalid student count!");
        return 0;
    }

    struct student s[count];

    read_input(s, count);
    display_output(s, count);

    return 0;
}

void read_input(struct student s[], int count)
{
    int i;

    for (i = 0; i < count; i++)
    {
        printf("\nEnter the student details:\n");

        printf("Enter the roll number: ");
        scanf("%d", &s[i].roll_number);

        printf("Enter the name: ");
        scanf(" %49[^\n]", s[i].name);

        printf("Enter the cut-off: ");
        scanf("%f", &s[i].cut_off);

        printf("Enter the city: ");
        scanf(" %49[^\n]", s[i].city);

        printf("Enter the dream: ");
        scanf(" %49[^\n]", s[i].dream);
    }
}

void display_output(struct student s[], int count)
{
    int i;

    printf("\n===== STUDENT DATABASE =====\n");

    for (i = 0; i < count; i++)
    {
        printf("\nStudent %d Details\n", i + 1);

        printf("Roll Number : %d\n", s[i].roll_number);
        printf("Name        : %s\n", s[i].name);
        printf("Cut-off     : %.2f\n", s[i].cut_off);
        printf("City        : %s\n", s[i].city);
        printf("Dream       : %s\n", s[i].dream);
    }
}