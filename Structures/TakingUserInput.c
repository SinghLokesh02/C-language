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
    printf("The name is : %s\n", person.name);
    printf("The Age is : %d\n", person.age);
    printf("The Roll is : %d\n", person.roll);
}

int main()
{

    int a, r;
    char n[30];

    printf("Enter Your name : ");
    gets(n);

    printf("Enter Your age : ");
    scanf("%d", &a);
    printf("Enter Your Roll Number : ");
    scanf("%d", &r);
    st alok = {a, r, ""};
    strcpy(alok.name, n);

    PrindData(alok);

    return 0;
}