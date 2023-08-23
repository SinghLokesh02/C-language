// Pointers in C language

// Pointers are variables that store the address of another variable.

// A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're working with is assigned to the pointer:

#include <stdio.h>
int main()
{
    int a = 10;
    int *p = &a;
    printf("The value of a is %d\n", a);
    printf("The value of a is %d\n", *p);

    // Print the address
    printf("The address of a is %u\n", &a);
    printf("The address of a is %u\n", p);

    // Print the size
    printf("The size of pointer to a is %d bytes\n", sizeof(p));
    printf("The size of pointer to a is %d bytes\n", sizeof(int *));
    printf("The size of pointer to a is %d bytes\n", sizeof(int **));
    printf("The size of pointer to a is %d bytes\n", sizeof(float *));

    // Pointer to pointer
    int **q = &p;
    printf("The value of a is %d\n", **q);
    printf("The address of a is %u\n", *q);
    printf("The address of a is %u\n", q);

    // Pointer to pointer to pointer
    int ***r = &q;
    printf("The value of a is %d\n", ***r);
    printf("The address of a is %u\n", **r);
    return 0;
}