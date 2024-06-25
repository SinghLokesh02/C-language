#include <stdio.h>
void Sum(int a, int b)
{
    printf("The sum of Numbers is %d\n", a + b);
}

void Subtract(int a, int b)
{
    printf("The difference of Numbers is %d\n", a - b);
}

void Multiply(int a, int b)
{
    printf("The product of Numbers is %d\n", a * b);
}

void Divide(int a, int b)
{
    printf("The division of Numbers is %d\n", a / b);
}

int main()
{
    int x = 1;

    while (x != 0)
    {
        int choice;
        printf("\n\n1: Sum\n2: Subtract\n3: Multiply\n4: Divide\n5: Exit\n");
        printf("Enter the choice : ");
        scanf("%d", &choice);
        if (choice == 5)
        {
            x = 0;
            break;
        }
        int a, b;
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);
        if (choice == 1)
        {
            Sum(a, b);
        }
        else if (choice == 2)
        {
            Subtract(a, b);
        }
        else if (choice == 3)
        {
            Multiply(a, b);
        }
        else if (choice == 4)
        {
            Divide(a, b);
        }
    }
    printf("Thank you for using the Calculator\n");
}
