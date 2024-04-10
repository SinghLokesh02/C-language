/*
6) Write a Program to Print the Following Pattern.

For n = 5 (Take n as input from user)

* * * * *
* * * *
* * *
* *
*

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Row You want to Print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <=  n; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}