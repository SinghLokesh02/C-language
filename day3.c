// Operators In C Language

#include <stdio.h>
int main()
{

    // Arithmetic Operator
    int a = 10, b = 7;
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n", a % b);

    // Relational Operator
    printf("a > b = %d\n", a > b);
    printf("a < b = %d\n", a < b);
    printf("a >= b = %d\n", a >= b);
    printf("a <= b = %d\n", a <= b);
    printf("a == b = %d\n", a == b);
    printf("a != b = %d\n", a != b);

    // logical Operator
    a = 1,b=0;
    printf("a && b = %d\n", a && b);
    printf("a || b = %d\n", a || b);
    printf("!a = %d\n", !a);
 
    
    // Assignment Operator

    printf("\n\n\nAssignment Operator\n\n");
    a = 10;
    printf("a = %d\n", a);
    a += 10; // a = a + 10
    printf("a = %d\n", a);
    a -= 10; // a = a - 10
    printf("a = %d\n", a);
    a *= 10; // a = a * 10
    printf("a = %d\n", a);
    a /= 10; // a = a / 10
    printf("a = %d\n", a);
    a %= 10; // a = a % 10
    printf("a = %d\n", a);
    

    return 0;
}