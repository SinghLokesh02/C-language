
// Union in C programming language

// Definition of Union -> Union is a user defined data type in C programming language. It is almost similar to structure in C programming language. The only difference is that in structure, each member has its own memory location whereas, in union, all members share the same memory location. So, only one of the member can contain a value at any given time. It is used to store different types of data in the same memory location.

// Declaration of Union -> The union keyword is used to declare a union in C programming language. The syntax to declare a union is:

// Size of Union -> The size of union is the size of the largest member in the union. For example, consider the following union:


#include <stdio.h>
#include <string.h>
union Student
{
    int roll;
    int marks;
    char name[30];
};

int main()
{
    union Student alok;
    strcpy(alok.name,"Alok Dubey");
    alok.roll = 67;
    alok.marks = 34; 

    printf("The marks is : %d\n",alok.marks);
    printf("The Roll is : %d\n",alok.roll);
    printf("The Name is : %s\n",alok.name);


    return 0;
}


 
    


 