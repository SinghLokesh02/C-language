// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     // String Methods

//     char name[30];
//     printf("Enter a String : ");
//     gets(name);
//     printf("The String is : %s\n",name);

//     // 1 strrev()
//     strrev(name);
//     printf("The Reverse of string is : %s\n",name);

//     // 2) streln()
//     printf("The Reverse of string is : %d\n",strlen(name));

//     // strcat()
//     char f_name[] = "Lokesh ";
//     char l_name[] = "Singh";
//     printf("Concatenated String is : %s",strcat(f_name,l_name));
//     return 0;
// }

// Structure in C

#include <stdio.h>
#include <string.h>

typedef struct Student{
    int marks;
    int roll;
    char name[30];
}data ;

int main()
{
     
    data sonali;
    // lokesh.marks = 100;
    // strcpy(lokesh.name,"Lokesh Singh");
    // lokesh.roll = 25;

    data lokesh = {100,25,"Lokesh Singh"};

    printf("The marks of student is : %d\n",lokesh.marks);
    printf("The roll of student is : %d\n",lokesh.roll);
    printf("The name of student is : %s\n",lokesh.name);

    sonali.marks = 90;
    strcpy(sonali.name,"Sonali Singh");
    sonali.roll = 58;

    printf("The marks of student is : %d\n",sonali.marks);
    printf("The roll of student is : %d\n",sonali.roll);
    printf("The name of student is : %s\n",sonali.name);


    return 0;
}