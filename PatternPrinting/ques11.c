/*
11) Write a Program to Print the Following Pattern.
Hollow Square Pattern of given height
For n = 5 (Take n as input from user)

* * * * *
*       *
*       *
*       *
* * * * *

*/

#include <stdio.h>
int main()
{

    int n;
    printf("Enter the Number of Rows : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || j == n || i == n)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}