// Strings in C- language

/*
Strings
Strings are used for storing text/characters.

For example, "Hello World" is a string of characters.

Unlike many other programming languages, C does not have a String type to easily create string variables. Instead, you must use the char type and create an array of characters to make a string in C:
*/

#include <stdio.h>
int main()
{
    char greetings[] = "Hello World!";

    // printing string
    printf("%s\n", greetings);

    // taking input of string
    // char name[20];
    // printf("Enter your name : ");
    // Problem with scanf is that it will only take input until it finds a space

    // scanf("%s", name);
    // printf("Your name is %s\n", name);

    // Problem with gets() function is that it will take input until it finds a new line character
    // Solution to this problem is to use gets() function
    char name1[13];
    printf("Enter your father's name : ");
    fgets(name1, sizeof(name1), stdin);
    printf("Your father's name is %s\n", name1);


    // Print the string character by character
    for (int i = 0; i < sizeof(name1); i++)
    {
        printf("%c\n", name1[i]);
    }


    // Another Way Of Creating Strings
    char greetings[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '!', '\0'};
    printf("%s", greetings);
    return 0;
}