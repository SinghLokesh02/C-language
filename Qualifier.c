/*
Qualifier in C Introduction
A qualifier is a keyword that precedes a data type, such as signed, unsigned, long, and short.

The Qualifier are the keywords that are applied to the datatype to change its storage size and range.

The Types of Qualifier in C are:
1) Sign Qualifier

i)signed
ii)unsigned

2) Size Qualifier
i) long
ii) short

3) Type Qualifier
i) const
ii) volatile
*/

#include<stdio.h>
int main()
{
int num = 10;
short int num1 = 10;
long int num2 = 10;

printf("The size of num is %d\n",sizeof(num));
printf("The size of num1 is %d\n",sizeof(num1));
printf("The size of num2 is %d\n",sizeof(num2));

int a = -10;
unsigned int b;
b = -10;

printf("The value of a is %d\n",a);
printf("The value of b is %u\n",b);

return 0;
}