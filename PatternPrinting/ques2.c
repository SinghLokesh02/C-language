/*
2) Write a Program to Print the Following Pattern.

For n = 4 (Take n as input from user)
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>
int main()
{
    int n,count = 1;
    printf("Enter the number of Row You want to Print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }

    return 0;
}