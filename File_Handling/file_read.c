#include <stdio.h>
int main()
{

    // Open the file

    char content[1000];
    FILE *fptr;
    fptr = fopen("content.txt", "r");
    if (fptr != NULL)
    {
        printf("The file is Opened Successful And the data of the file is \n\n");
        // Read the file
        while (fptr != NULL)
        {
            while (fgets(content, 1000, fptr))
                printf("%s", content);
        }
    }
    else
    {
        printf("Unable to open the file\n");
    }


    // Close the file
    fclose(fptr);

    return 0;
}