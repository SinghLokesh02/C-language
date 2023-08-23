// String Functions In C Language

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    /* Declaring a string variable */
    printf("Enter a string: ");
    scanf("%s", str);
    
    /* Accepting input from the user and storing it in the string */
    printf("The string is: %s\n", str);

    // strlen() function
    printf("The length of the string is: %d\n", strlen(str));\


    // strcpy() function
    char str1[20];
    strcpy(str1, str);
    printf("The copied string is: %s\n", str1);


    // strcat() function
    char str2[20];
    printf("Enter another string: ");
    scanf("%s", str2);
    strcat(str, str2);
    printf("The concatenated string is: %s\n", str);


    // strcmp() function -> It returns 0 if both the strings are equal
    // It returns a positive value if the first string is greater than the second string
    printf("The result of comparison is: %d\n", strcmp(str, str2));


    // strrev() function
    printf("The reversed string is: %s\n", strrev(str));





    return 0;
}