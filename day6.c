/*
Switch Statement
Instead of writing many if..else statements, you can use the switch statement.

The switch statement selects one of many code blocks to be executed:
*/

#include <stdio.h>
int main()
{
    // Example - 1
    int age;
    printf("Please Enter your age : ");
    scanf("%d", &age);
    switch (age)
    {
    case 3:
        printf("The age is 3\n");
        break;
    case 13:
        printf("The age is 13\n");
        break;
    case 23:
        printf("The age is 23\n");
        break;
    default:
        printf("The age is not 3, 13 or 23\n");
    }

    // Example - 2
    int day;
    printf("Please Enter the day number : ");
    scanf("%d", &day);
    switch (day)
    {
    case 1:
        printf("Today is Monday\n");
        break;
    case 2:
        printf("Today is Tuesday\n");
        break;
    case 3:
        printf("Today is Wednesday\n");
        break;
    case 4:
        printf("Today is Thursday\n");
        break;
    case 5:
        printf("Today is Friday\n");
        break;
    case 6:
        printf("Today is Saturday\n");
        break;
    case 7:
        printf("Today is Sunday\n");
        break;
    default:
        printf("Invalid Input! Please enter week number between 1-7.\n");
    }

    return 0;
}