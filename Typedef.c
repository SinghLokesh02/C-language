/*
Introduction to typedef in C
typedef is a keyword in C which is used to assign alternative names to existing datatypes. Following is the general syntax of using typedef,

typedef <previous_name> <alias_name>;

For example, the following statement will create a new datatype called num which is an alias name for int datatype.

typedef int num;
Now, we can use num in place of int. The following example demonstrates the same.


*/
#include <stdio.h>
int main()
{
    typedef long long int ll;

    ll a = 1000000000000000000;
    printf("a = %lld\n", a);

    typedef int num;
    num b = 10;
    printf("b = %d\n", b);

    typedef float point_wala_num;
    point_wala_num c = 10.5;

    printf("c = %f\n", c);

    return 0;
}