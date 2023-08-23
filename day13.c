// Functions In C Language
// Function in C language
    // A function is a block of code that performs a specific task.
    // A function declaration tells the compiler about a function's name, return type, and parameters.
    // A function definition provides the actual body of the function.
    // The C standard library provides numerous built-in functions that your program can call.
    // For example, strcat() to concatenate two strings, memcpy() to copy one memory location to another location, and many more functions.

#include <stdio.h>\
// Function declaration -> This function print table of a number
// Example : 1
void print_table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }
}

// Example : 2
int sum(int a, int b); // Function prototype declaration

int sum(int a, int b)
{
    return a + b;
}

int main()
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    print_table(num);

    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);


    // We are calling the function named sum
    printf("The sum is %d\n", sum(a, b));
    return 0;
}