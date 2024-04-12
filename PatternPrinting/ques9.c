/*
9) Write a Program to Print the Following Pattern.

Hollow Pyramid of given height

For n = 5 (Take n as input from user)

     *
    * *
   *   *
  *     *
 * * * * *
*/

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number of Row You want to Print : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {   

        for(int space = 1;space<=n-i;space++){
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if(i == n || j == 1 || j == i)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}