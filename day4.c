// Format Specifier and Escape Sequence Character and Comments

#include <stdio.h>
int main()
{
    // Escape Sequence Characters in C language
    printf("Hello World\n");
    printf("Hello\tWorld\n");
    printf("Hello\bWorld\n");
    printf("Hello\rWorld\n");
    printf("Hello\fWorld\n");
    printf("Hello\aWorld\n");

    // Format Specifier in C language
    int a = 10;
    float b = 0.789;
    printf("Value of a is %d\n", a);
    printf("Value of b is %f\n", b);

    printf("The value of b is %8.3f\n",b);// It means print b with 8 character space and with the accuracy of 3 decimal places


    // Constant in C

    // Method -1

    const int c = 10;
    // c = 33; This will give error because it is a constant
    printf("The value of const c is : %d\n",c);


    // Method -2

    #define pi 3.14 // No need to  put Semicolon
    // pi = 7.33 This will give error Because it is a Constant
    printf("The value of pi is : %3.2f\n",pi);

    





     
    return 0;
}