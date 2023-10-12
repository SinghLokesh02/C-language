#include <stdio.h>
int main()
{
    FILE *fptr;
    // fptr = fopen("write.txt", "w");// For write (It will Overwrite)
    fptr = fopen("write.txt", "a");// For write (It will Append the data in the existing file)

    // learn about r+, w+, a+ mode of the file.

    fputs("This is the new txt file created by me.\n", fptr);
    fputs("This is a new line of the Program\n", fptr);
    fputs("This is Another line of the Program.\n", fptr);

    printf("The Data is Updated on The File\n");

    fclose(fptr);
    return 0;
}