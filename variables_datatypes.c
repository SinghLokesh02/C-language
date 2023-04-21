/*
Introduction of Variables and datatype in C
variables -> These are like Container which is used to store values 

What is a Variable?
A variable is an identifier which is used to store some value. Constants can never change at the time of execution. Variables can change during the execution of a program and update the value stored inside it.

A single variable can be used at multiple locations in a program. A variable name must be meaningful. It should represent the purpose of the variable.

A variable must be declared first before it is used somewhere inside the program. A variable name is formed using characters, digits and an underscore.

Following are the rules that must be followed while creating a variable:

A variable name should consist of only characters, digits and an underscore.
A variable name should not begin with a number.
A variable name should not consist of whitespace.
A variable name should not consist of a keyword.
‘C’ is a case sensitive language that means a variable named ‘age’ and ‘AGE’ are different.


Data types
‘C’ provides various data types to make it easy for a programmer to select a suitable data type as per the requirements of an application. Following are the three data types:

Primitive data types
Derived data types
User-defined data types
There are five primary fundamental data types,

int for integer data
char for character data
float for floating point numbers
double for double precision floating point numbers
void

Array, functions, pointers, structures are derived data types. ‘C’ language provides more extended versions of the above mentioned primary data types. Each data type differs from one another in size and range. Following table displays the size and range of each data type.

Datatypes in C language

*/

 #include<stdio.h>
 int main()
 {
 int num1 = 5; 
 char c = 'a';
 float f = 0.08f;
 double d = 78.9098;
 short s = 1;
 long l = 1234;
 char *p = "Hello World";



 printf("%d\n",num1);
 printf("%c\n",c);
 printf("%f\n",f);
 printf("%lf\n",d);
 printf("%hu\n",s);
 printf("%ld\n",l);
 printf("%s\n",p);
 return 0;
 }