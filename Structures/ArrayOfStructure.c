#include <stdio.h>
#include <string.h>

typedef struct Student
{
    int age;
    int roll;
    char name[30];
} st;

void PrindData(st person)
{
    printf("\n");
    printf("The name is : %s\n", person.name);
    printf("The Age is : %d\n", person.age);
    printf("The Roll is : %d\n", person.roll);
}

int main()
{

    // Array of Structure

    st arr[3];

    for (int i = 0; i < 3; i++)
    {

        int a, r;
        char n[30];

        printf("Enter Your age : ");
        scanf("%d", &a);
        printf("Enter Your Roll Number : ");
        scanf("%d", &r);
        getchar();
        printf("Enter Your name : ");
        gets(n);

        // Assign values to structure members
        arr[i].age = a;
        arr[i].roll = r;
        strcpy(arr[i].name, n);
        printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        PrindData(arr[i]);
    }

    return 0;
}