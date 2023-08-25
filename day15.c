// Structure in C language
/*
Structures (also called structs) are a way to group several related variables into one place. Each variable in the structure is known as a member of the structure.

Unlike an array, a structure can contain many different data types (int, float, char, etc.).

// In this lecture we are going to learn about basic structure code
*/
#include<stdio.h>
#include<string.h>
struct student{
    int age;
    char name[20];
    int class;
};
int main()
{
    struct student lokesh;
    lokesh.age = 21;
    lokesh.class = 12;
    strcpy(lokesh.name,"Lokesh Singh");

    // Print the data 
    printf("The student Data is : \n");
    printf("The name of student is : %s\n",lokesh.name);
    printf("The age of student is : %d\n",lokesh.age);
    printf("The class of student is : %d\n",lokesh.class);



return 0;
}