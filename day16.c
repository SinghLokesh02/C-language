// Advance Structure in C programming

#include <stdio.h>
#include <string.h>

// struct student
// {
//     int roll;
//     char name[20];
//     int total_marks;

// };

// Defining the same structure using typedef
typedef struct student
{
    int roll;
    char name[20];
    int total_marks;

}st;

int main()
{
    // struct student s1,s2;
    st s1,s2;

    s1.roll = 25;
    s1.total_marks = 467;
    strcpy(s1.name,"Lokesh Singh");

    // Printing the data of s1
    printf("The name is %s\n",s1.name);
    printf("The roll number is %d\n",s1.roll);
    printf("The Total marks is %d\n",s1.total_marks);


    s2.roll = 58;
    s2.total_marks = 447;
    strcpy(s2.name,"Sonali Singh");

    // Printing the data of s2
    printf("The name is %s\n",s2.name);
    printf("The roll number is %d\n",s2.roll);
    printf("The Total marks is %d\n",s2.total_marks);
    return 0;
}