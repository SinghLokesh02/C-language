// If else Conditionals in C Language

#include <stdio.h>
int main()
{
    // Example - 1 (Simple if else)
    int age;
    printf("Enter your age : ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("You can vote");
    }
    else
    {
        printf("You can not vote");
    }

    // Example - 2 (if else ladder)

    int marks;
    printf("\nEnter your marks : ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("You got Grade A\n");
    }
    else if (marks >= 80)
    {
        printf("You got Grade B\n");
    }
    else if (marks >= 70)
    {
        printf("You got Grade C\n");
    }
    else if (marks >= 60)
    {
        printf("You got Grade D\n");
    }
    else if (marks >= 50)
    {
        printf("You got Grade E\n");
    }
    else
    {
        printf("You got Grade F\n");
    }

    return 0;
}