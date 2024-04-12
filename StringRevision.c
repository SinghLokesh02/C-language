    /*
    String -> Is There is any datatype string in C ??
    Ans -> NO

    What is string in C?
    Ans -> It is Collection of Characters or It is a char array in C

    How much size(minimum we have to allocate of string in C) ?
    Ans -> sizeof(str)+1;
    Example -> Suppose Your String is Lokesh then it has length of 6 and we need to create 7 size array
    

    Ways to Declare a String

    1) char name = {'L', 'o', 'k', 'e', 's', 'h','\0'};
    2) char name = "Lokesh"


    Ways to take input of string
    1) gets


    Ways to Print String in C

    1) Using Loop
    2) Using puts
    3) Using %s and name of string

    */
#include <stdio.h>

void printStr(char arr[]){
    int i = 0;

    while(arr[i] != '\0'){
        printf("%c",arr[i]);
        i++;
    }
    printf("\n");
}

int main()
{

    char str1[] = {'h','e','l','l','o','\0'};
    char str2[] = "Lokesh Singh"; // Takes automatic '\0' at last by compiler
    char name[20];
    // Print String Using Loop
    printStr(str2);

    // Take Input by user
    printf("Enter Your Name : ");
    gets(name);


    // Print the String by all methods

    // 1) puts
    printf("The Name is Using Puts\n");
    puts(name);

    // 2) Using %s 
    printf("The Name is : %s \n",name);

    // 3) Using Loops
    printf("The name Using Loop\n");
    printStr(name);

    return 0;
}