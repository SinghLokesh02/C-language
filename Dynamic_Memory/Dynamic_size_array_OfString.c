// // Dynamic size array of Strings

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h> // for dynamic memory allocation

// #define BUFFER_SIZE 4096

// int main()
// {
//     // Variable Array of Strings
//     char **arrOfStrings;

//     // Total Number of string get from the user
//     int total = 0;

//     printf("Enter the Number of Strings : ");
//     scanf("%d", &total);

//     // Creating an array of given size
//     arrOfStrings = malloc(total * sizeof(char *));

//     // Initially creating a string of buffer_size
//     char buffer[BUFFER_SIZE];
//     int length = 0;
//     while (getchar() != '\n')
//         ;
//     printf("\n");
//     for (int i = 0; i < total; i++)
//     {
//         printf("Enter String %d : ", i + 1);
//         fgets(buffer, BUFFER_SIZE, stdin);
//         length = strlen(buffer);
//         buffer[length - 1] = '\0';

//         arrOfStrings[i] = malloc((length + 1) * sizeof(char));
//         strcpy(arrOfStrings[i], buffer);
//     }

//     printf("The Resulting Array of String array\n\n");

//     for (int i = 0; i < total; i++)
//     {
//         printf("String[%d] = %s\n", i + 1, arrOfStrings[i]);
//     }

//     printf("\n");

//     return 0;
// }

// ************************ Code with Proper Comment *****************

// Dynamic size array of Strings

#include <stdio.h>
#include <stdlib.h> // for dynamic memory allocation
#include <string.h>

#define BUFFER_SIZE 4096

int main()
{
    // Variable Array of Strings
    char **arrOfStrings;

    // Total Number of strings get from the user
    int total = 0;

    printf("Enter the Number of Strings : ");
    scanf("%d", &total);

    // Check if user entered a valid number (avoid allocating for zero or negative)
    if (total <= 0)
    {
        printf("Invalid number of strings. Please enter a positive number.\n");
        return 1;
    }

    // Creating an array of pointers to hold string addresses (total * sizeof(char*))
    arrOfStrings = malloc(total * sizeof(char *));

    // Check if memory allocation for the array of pointers was successful
    if (arrOfStrings == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Temporary buffer to read user input
    char buffer[BUFFER_SIZE];

    // Clear any leftover newline character from previous input (optional)
    int length = 0;
    while (getchar() != '\n')
        ;

    printf("\n");

    for (int i = 0; i < total; i++)
    {
        printf("Enter String %d : ", i + 1);

        // Read user input into the buffer using fgets (fgets reads until newline or buffer full)
        fgets(buffer, BUFFER_SIZE, stdin);

        // Get the length of the entered string (excluding newline)
        length = strlen(buffer);

        // Remove the newline character from the end (if present)
        if (buffer[length - 1] == '\n')
        {
            buffer[length - 1] = '\0';
            length--;
        }

        // Allocate memory for the individual string (length + 1 for null terminator)
        arrOfStrings[i] = malloc((length + 1) * sizeof(char));

        // Check if memory allocation for the individual string was successful
        if (arrOfStrings[i] == NULL)
        {
            printf("Memory allocation failed!\n");
            // Free the already allocated memory (clean up)
            for (int j = 0; j < i; j++)
            {
                free(arrOfStrings[j]);
            }
            free(arrOfStrings);
            return 1;
        }

        // Copy the string from buffer to the allocated memory
        strcpy(arrOfStrings[i], buffer);
    }

    printf("The Resulting Array of String array\n\n");

    for (int i = 0; i < total; i++)
    {
        printf("String[%d] = %s\n", i + 1, arrOfStrings[i]);
    }

    printf("\n");

    // Free the allocated memory for each string and the array of pointers
    for (int i = 0; i < total; i++)
    {
        free(arrOfStrings[i]);
    }
    free(arrOfStrings);

    return 0;
}
