/*
4) Write a Program to Print the Following Pattern.

For n = 4 (Take n as input from user)
1 2 3 4
2 3 4
3 4
4

*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Row You want to Print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}