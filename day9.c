// Arrays in C Language

/*
Arrays
Arrays are used to store multiple values in a single variable, instead of declaring separate variables for each value.

To create an array, define the data type (like int) and specify the name of the array followed by square brackets [].

To insert values to it, use a comma-separated list, inside curly braces:
*/

#include <stdio.h>
int main()
{
    // Basic Syntax of Array
    int arr[] = {1, 2, 3, 4, 5};
    int arr1[10] = {1, 2, 3, 4, 5,2,3,4,5,78};

    // Accessing Array Elements
    printf("%d\n", arr[0]);

    // Changing Array Elements
    arr[0] = 10;

    // Printing Array Elements
    printf("%d\n", arr[0]);


    // Looping through an Array
    int n = sizeof(arr1)/sizeof(arr1[0]);
    printf("The size of arr1 is %d\n", n);
    printf("printing array using for loop\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr1[i]);
    }


    // Example of Array
    int marks[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of marks for student %d : ", i + 1);
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The value of marks for student %d is %d\n", i + 1, marks[i]);
    }


    

    return 0;
}