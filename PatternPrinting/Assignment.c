/*
        1
      2 3 2
    3 4 5 4 3
  4 5 6 7 6 5 4
5 6 7 8 9 8 7 6 5
*/

#include <stdio.h>

int main()
{
    int rows = 5;
    int spaces, num;

    // Loop for each row
    for (int i = 1; i <= rows; i++)
    {
        num = i;
        // Loop for printing spaces
        for (spaces = 1; spaces <= rows - i; spaces++)
        {
            printf("  "); // Print 2 spaces for each space
        }
        // Loop for printing numbers in ascending order
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", num++);
        }
        // Loop for printing numbers in descending order
        for (int k = num - 2; k >= i; k--)
        {
            printf("%d ", k);
        }
        printf("\n"); // Move to the next line for the next row
    }
    return 0;
}
